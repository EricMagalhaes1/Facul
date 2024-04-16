#include <stdio.h>
#include <math.h>
#include "cabecalho.h"
#include "metodos.h"

void metodo0511() {
    printf("\nExemplo 0511: Mostrar multiplos de 6 em ordem crescente:\n");
    int n = lerQuantidade();
    mostrarMultiplosDeSeis(n);
}

void metodo0512() {
    printf("\nExemplo 0512: Mostrar multiplos de 3 e 5 em ordem crescente:\n");
    int n = lerQuantidade();
    mostrarMultiplosDeTresECinco(n);
}

void metodo0513() {
    printf("\nExemplo 0513: Mostrar potencias de 4 em ordem decrescente:\n");
    int n = lerQuantidade();
    mostrarPotenciasDeQuatro(n);
}

void metodo0514() {
    printf("\nExemplo 0514: Mostrar denominadores multiplos de 7:\n");
    int n = lerQuantidade();
    mostrarDenominadoresMultiplosDeSete(n);
}

void metodo0515() {
    printf("\nExemplo 0515: Mostrar valores pares nos denominadores da sequência:\n");
    float x;
    printf("Digite um valor real x: ");
    scanf("%f", &x);
    int n = lerQuantidade();
    mostrarValoresParesNosDenominadores(x, n);
}

void metodo0516() {
    printf("\nExemplo 0516: Calcular soma dos primeiros valores positivos múltiplos de 3 e não múltiplos de 5:\n");
    int n = lerQuantidade();
    printf("Soma: %d\n", calcularSomaMultiplosDeTresNaoMultiplosDeCinco(n));
}

void metodo0517() {
    printf("\nExemplo 0517: Calcular soma dos inversos de valores positivos múltiplos de 6 e não múltiplos de 5:\n");
    int n = lerQuantidade();
    printf("Soma dos inversos: %.6f\n", calcularSomaInversosMultiplosDeSeisNaoMultiplosDeCinco(n));
}

void metodo0518() {
    printf("\nExemplo 0518: Calcular soma da adição dos primeiros números naturais começando no valor 6:\n");
    int n = lerQuantidade();
    printf("Soma da adição: %d\n", calcularSomaAdicaoNaturaisAPartirDeSeis(n));
}

void metodo0519() {
    printf("\nExemplo 0519: Calcular soma dos quadrados da adição dos números naturais começando no valor 6:\n");
    int n = lerQuantidade();
    printf("Soma dos quadrados: %d\n", calcularSomaQuadradosAdicaoNaturaisAPartirDeSeis(n));
}


void metodo0520() {
    printf("\nExemplo 0520: Calcular soma dos inversos das adições de números naturais terminando no valor 6:\n");
    int n = lerQuantidade();
    printf("Soma dos inversos: %.6f\n", calcularSomaInversosAdicaoNaturaisAteSeis(n));
}


int main() {
    int x;

    do {
        printf("\nAtivide AEDS1_05 - Programa \n");
        printf("Opcoes\n");
        printf("1 - Metodo 0511 | 2 - Metodo 0512\n");
        printf("3 - Metodo 0513 | 4 - Metodo 0514\n");
        printf("5 - Metodo 0515 | 6 - Metodo 0516\n");
        printf("7 - Metodo 0517 | 8 - Metodo 0518\n");
        printf("9 - Metodo 0519 | 9 - Metodo 0520\n");
        printf("0 - parar\n");
        printf("Entrar com uma opcao: ");
        scanf("%d", &x);
        while (getchar() != '\n'); // Limpar o buffer de entrada

        switch (x) {
            case 0: 
                printf("Encerrando o programa.\n");
                break;
            case 1: 
                metodo0511(); 
                break;
            case 2: 
                metodo0512(); 
                break;
            case 3: 
                metodo0513(); 
                break;
            case 4: 
                metodo0514(); 
                break;
            case 5: 
                metodo0515(); 
                break;
            case 6: 
               metodo0516(); 
                break;
            case 7: 
                metodo0517(); 
                break;
            case 8: 
               metodo0518(); 
                break;
           case 9: 
                metodo0519(); 
                break;
            case 10: 
               metodo0520(); 
                break;
           default:
                printf("Valor Invalido\n");
        } 
    } while (x != 0);

    printf("Apertar ENTER para terminar\n");
    return 0;
}