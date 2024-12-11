#include <stdio.h>
#include <string.h>
#include "ingrediente.h"

void adicionarIngrediente(Ingrediente* ingredientes, int* num_ingredientes) {
    //Verifica se pode ser adicionado mais ingredientes
    if (*num_ingredientes >= MAX_INGREDIENTES) {
        printf("Limite de ingredientes atingido.\n");
        return;
    }
    //Cria nova instancia de Ingredientes
    Ingrediente novo_ingrediente;
    novo_ingrediente.id = *num_ingredientes + 1; // Iteração de id "automatico"
    printf("Nome do Ingrediente: ");
    scanf("%s", novo_ingrediente.nome);
    printf("Preço: ");
    scanf("%f", &novo_ingrediente.preco);

    //Inseri a nova instancia de
    ingredientes[*num_ingredientes] = novo_ingrediente;
    (*num_ingredientes)++;
}

void visualizarIngredientes(Ingrediente* ingredientes, int num_ingredientes) {
    for (int i = 0; i < num_ingredientes; i++) {
        printf("Ingrediente ID: %d, Nome: %s, Preço: %.2f\n", 
               ingredientes[i].id, ingredientes[i].nome, ingredientes[i].preco);
    }
}

void editarIngrediente(Ingrediente* ingredientes, int num_ingredientes) {
    int id;
    printf("Digite o ID do ingrediente a ser editado: ");
    scanf("%d", &id);
    if (id <= 0 || id > num_ingredientes) {
        printf("Ingrediente nao encontrado.\n");
        return;
    }
    Ingrediente* ingrediente = &ingredientes[id - 1];
    printf("Novo Nome do Ingrediente: ");
    scanf("%s", ingrediente->nome);
    printf("Novo Preço: ");
    scanf("%f", &ingrediente->preco);
}

void removerIngrediente(Ingrediente* ingredientes, int* num_ingredientes) {
    int id;
    printf("Digite o ID do ingrediente a ser removido: ");
    scanf("%d", &id);
    if (id <= 0 || id > *num_ingredientes) {
        printf("Ingrediente não encontrado.\n");
        return;
    }
    for (int i = id - 1; i < *num_ingredientes - 1; i++) {
        ingredientes[i] = ingredientes[i + 1];
    }
    (*num_ingredientes)--;
    printf("Ingrediente removido com sucesso.\n");
}