#include <stdio.h> 

int main(){
    int valor;
    int valor2;
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);
    printf("Digite um novo valor inteiro: ");
    scanf("%d", &valor2);
    int area = valor*valor2;
    int area2 = area * 6;

    printf("A area do retangulo e de : %d" , area2);
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar ( ); 
    return (0);
}