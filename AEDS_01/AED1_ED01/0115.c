#include <stdio.h>

int main(){
    int base;
    int altura;
    printf("Digite um valor inteiro: ");
    scanf("%d", &base);
    printf("Digite um novo valor inteiro: ");
    scanf("%d", &altura);

    int altura2 = altura*2;
    int area =  (base*altura2)/2;
    
    printf("A area do triangulo e de : %d" , area);
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar ( ); 
    return (0);
}