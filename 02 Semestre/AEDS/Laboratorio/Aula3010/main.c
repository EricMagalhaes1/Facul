#include <stdio.h>
#include "header.h"

int main()
{
    int vetor[5];

    preencherVetorAleatorio(vetor,5);
    imprimirVetor(vetor,5);
    printf("\nSoma = %d",somarElementosVetor(vetor,5));
    printf("\nMaior elemento = %d", maiorElemento(vetor,5));

    return 0;
}
