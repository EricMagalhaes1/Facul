#include <stdio.h>
#include <math.h>

float main (){

    float valor;
    printf("Digite um valor inteiro: ");
    scanf("%f", &valor);
    float valor2 = valor*3;

    float altura = (sqrt(3)/2)*valor2;
    float area =  (valor2*altura)/2;
    float perimetro = 3*valor2;
    
    printf("A altura do triangulo e de : %f" , altura);
    printf("A area do triangulo e de : %f" , area);
    printf("A perimetro do triangulo e de : %f" , perimetro);
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar ( ); 
    return (0);
}