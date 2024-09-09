#include <stdio.h>
#include <math.h>

int main() {
    float raio;

    // Definir e ler um valor real do teclado (raio do círculo)
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    // Calcular o raio do semicírculo (um sexto do raio do círculo)
    float raio_semicirculo = raio / 6.0;

    // Calcular a área do semicírculo
    float area_semicirculo = (3,14* pow(raio_semicirculo, 2)) / 2.0;

    // Mostrar a área do semicírculo
    printf("A area do semicirculo e de : %f" , area_semicirculo);
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar ( ); 
    return(0);
}

