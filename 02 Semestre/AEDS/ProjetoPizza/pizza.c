#include <stdio.h>
#include "pizza.h"


void salvar_pizzas(Pizza *pizzas, int num_pizzas, const char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return;
    }
}

int ler_pizzas(Pizza **pizzas, const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 0;
    }

    int num_pizzas;
    fscanf(file, "%d\n", &num_pizzas);

    *pizzas = (Pizza *)malloc(num_pizzas * sizeof(Pizza));
    if (*pizzas == NULL) {
        printf("Erro ao alocar memória para as pizzas.\n");
        fclose(file);
        return 0;
    }


    for (int i = 0; i < num_pizzas; i++) {
        fscanf(file, "%s\n%c\n%f\n", (*pizzas)[i].nome, &(*pizzas)[i].tamanho, &(*pizzas)[i].preco);

        // Lê os ingredientes
        int j = 0;
        while (fscanf(file, "%s\n%f\n", (*pizzas)[i].ingredientes[j].nome, &(*pizzas)[i].ingredientes[j].preco) == 2) {
            j++;
            if (j >= 10) break;
        }
        fscanf(file, ";\n");  
    }

    fclose(file);
    return num_pizzas;
}
