#include <stdio.h>


int main(){

    int valor;

    printf("Digite o raio da esfera: ");
    scanf("%d", &valor);

    if(valor == 0){
        printf("O valor inserido e par");
    }
    else 
        if (valor % 2 == 0){
            printf("O valor inserido e par");
        }
        else{
            printf("O valor inserido e impar");
        }
    
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar ( ); 
    return(0);
}