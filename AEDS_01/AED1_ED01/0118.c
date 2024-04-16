#include <stdio.h>
#include <math.h>

float main ()
{
    float valor;
    float valor2;
    float valor3;
    printf("Digite um valor: ");
    scanf("%f", &valor);
    printf("Digite um novo valor: ");
    scanf("%f", &valor2);
    printf("Digite um novo valor: ");
    scanf("%f", &valor3);

    float volume = (valor2/8) + (valor/8) + (valor3/8);
    printf("A perimetro do triangulo e de : %f" , volume);
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar ( ); 
}