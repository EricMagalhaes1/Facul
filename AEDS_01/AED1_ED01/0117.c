#include <stdio.h>
#include <math.h>

float main()
{
    float valor;
    printf("Digite um valor inteiro: ");
    scanf("%f", &valor);
    float valor2 = valor*3;
    float volume = valor2*valor2*valor2;

    printf("A perimetro do triangulo e de : %f" , volume);
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar ( ); 
    
}