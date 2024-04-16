#include <stdio.h>
#include <math.h>

int main() {
    float raio;
    float volume_esfera;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);


    float raio_esfera = 0.75 * raio;


    volume_esfera = (4.0 / 3.0) * 3,14 * pow(raio_esfera, 3);


    printf("O volume da esfera e de : %f" , volume_esfera);
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar ( ); 
    return(0);
}
