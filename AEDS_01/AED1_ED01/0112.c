#include <stdio.h> 

int main()
{
    int valor;
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);
    int valor2 = valor/2;
    int area = valor2 * valor2;

    printf("A area do quadrado e de : %d" , area);
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar ( ); 
    return (0);
}