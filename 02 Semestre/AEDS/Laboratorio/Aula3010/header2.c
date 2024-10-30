#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencherVetorAleatorio(int * vetor,int a){

    srand(time(NULL));
    for(int i = 0; i < a; i++){
        vetor[i] = rand() % 100;
    }
}


void imprimirVetor(int * vetor,int a){

    for(int i = 0; i < a; i++){
        printf("%d " ,vetor[i]);
    }
}

int somarElementosVetor(int * vetor, int a){

    int soma = 0;

    for(int i = 0; i < a; i++){
        soma += vetor[i];
    }
    return soma;
}

int maiorElemento(int* vetor, int a){

    int maior = 0;
    for(int i = 0; i < a; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }
    return maior;
};
