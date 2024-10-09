#include <stdio.h>
#include <math.h>


void menu(){


    printf("Programa para calcular media\n");
    printf("\n");
    printf("A) Media Aritimetica\n");
    printf("G) Media Geometrica\n");
    printf("H) Media Harmonica\n");
    printf("P) Media Ponderada\n");
    printf("S) Sair\n");
    printf("Digite a opcao desejada\n");
}

float mediaGeometrica(int a, int b,int c){
    float soma = a*b*c;
    float media = cbrt(soma);

    return media;
}

float mediaAritimetica(int n){

float soma =0 ;
int temp;
    for(int i = 0; i <n; i++){
        printf("Digite o numero para inserir no calculo da media\n");
        scanf("%d", &temp);
        soma += temp;
    }
    printf("%d" ,soma);
    float media = soma/n;

    return media;

}

int main(){
char opcao;
int a,b,c,n;
float resultado;

do{
menu();
    scanf(" %c", &opcao);
    system("clear");

    switch(opcao){
        case 'A':
        case 'a':
            printf("Media Aritimetica selecionada!\n");
            printf("Escolha a quantidade de numeros para somar na media: \n");
            scanf("%d", &n);
            resultado = mediaAritimetica(n);
            printf("Resultado = %.2f \n", resultado);
            break;
        case 'G':
        case 'g':
            printf("Media Geometrica selecionada!\n");
            printf("Escolha os 3 numeros para tirar a media geometrica:\n");
            scanf("%d %d %d", &a,&b,&c);
            resultado = mediaGeometrica(a,b,c);
            printf("Resultado = %.2f \n", resultado);
            break;
        case 'H':
        case 'h':
            printf("Media Harmonica seleconada!\n");
            break;
        case 'P':
        case 'p':
            printf("Media Ponderada selecionada!\n");
            break;

        case 's':
        case 'S':
            printf("Saindo!\n");
            return 0;
            break;
        default:
            printf("Caractere invalido!\n");
            break;
    }}
    while(opcao != 'S' || opcao !='s');
        printf("\n");
}
