#include <stdio.h> 

int main(){

    int valor;
    int valor2;
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);
    printf("Digite um novo valor inteiro: ");
    scanf("%d", &valor2);
    int valor3 = valor/4;
    int valor4 = valor2/4;
    int perimetro = (2*valor3) + (2*valor4);
    int area = valor3*valor4;
    printf("A area do retangulo e de : %d" , area);
    printf("\nO perimetro  do retangulo e de : %d" , perimetro);
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar ( ); 
    return (0);
}