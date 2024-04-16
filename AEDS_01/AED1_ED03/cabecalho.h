#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimirLinhaIgual(int comprimento) {
    for (int i = 0; i < comprimento; i++) {
        printf("=");
    }
    printf("\n");
}

int cabecalho(const char* lista, const char* data, const char* matricula, const char * nome ,const char* exercicio, const char* funcao) {
    int comprimentoTotal = strlen(exercicio) + strlen(funcao) + 3;
    printf("\n%s - %s\n",lista,data);
    printf("Matricula:"," %s",matricula,"Nome:"," %s\n\n", nome);
    imprimirLinhaIgual(comprimentoTotal);
    printf("%s - %s\n", exercicio, funcao);
    imprimirLinhaIgual(comprimentoTotal);
    printf("\n");
    return EXIT_SUCCESS;
}