#include <stdio.h>
#include <string.h>
#include "pizza.h"

void adicionarPizza(Pizza pizzas[], int* qtdPizzas) {
    if (*qtdPizzas >= MAX_PIZZAS) {
        printf("Limite de pizzas atingido.\n");
        return;
    }
    Pizza nova_pizza;
    nova_pizza.id = *qtdPizzas + 1; // ID simples
    printf("Nome da Pizza: ");
    scanf("%s", nova_pizza.nome);
    printf("Tamanho (P, M, G): ");
    scanf(" %c", &nova_pizza.tamanho);
    printf("Preco: ");
    scanf("%f", &nova_pizza.preco);
    
    printf("Número de ingredientes padrão: ");
    scanf("%d", &nova_pizza.num_ingredientes);
    for (int i = 0; i < nova_pizza.num_ingredientes; i++) {
        printf("Ingrediente %d - Nome: ", i + 1);
        scanf("%s", nova_pizza.ingredientes[i].nome);
        printf("Preco: ");
        scanf("%f", &nova_pizza.ingredientes[i].preco);
        nova_pizza.ingredientes[i].id = i + 1; // ID simples para ingredientes
    }

    pizzas[*qtdPizzas] = nova_pizza;
    (*qtdPizzas)++;
}

void visualizarPizzas(Pizza* pizzas, int qtdPizzas) {
    for (int i = 0; i < qtdPizzas; i++) {
        printf("Pizza ID: %d, Nome: %s, Tamanho: %c, Preco: %.2f\n", 
               pizzas[i].id, pizzas[i].nome, pizzas[i].tamanho, pizzas[i].preco);
        printf("Ingredientes:\n");
        for (int j = 0; j < pizzas[i].num_ingredientes; j++) {
            printf("  - %s: %.2f\n", pizzas[i].ingredientes[j].nome, 
                   pizzas[i].ingredientes[j].preco);
        }
    }
}

void editarPizza(Pizza* pizzas, int qtdPizzas) {
    int id;
    printf("Digite o ID da pizza a ser editada: ");
    scanf("%d", &id);
    if (id <= 0 || id > qtdPizzas) {
        printf("Pizza nao encontrada.\n");
        return;
    }
    Pizza* pizza = &pizzas[id - 1];
    printf("Novo Nome da Pizza: ");
    scanf("%s", pizza->nome);
    printf("Novo Tamanho (P, M, G): ");
scanf(" %c", &pizza->tamanho);
    printf("Novo Preço: ");
    scanf("%f", &pizza->preco);
    
    printf("Número de ingredientes padrão: ");
    scanf("%d", &pizza->num_ingredientes);
    for (int j = 0; j < pizza->num_ingredientes; j++) {
        printf("Ingrediente %d - Nome: ", j + 1);
        scanf("%s", pizza->ingredientes[j].nome);
        printf("Preço: ");
        scanf("%f", &pizza->ingredientes[j].preco);
        pizza->ingredientes[j].id = j + 1;
    }
}

void removerPizza(Pizza* pizzas, int* qtdPizzas) {
    int id;
    printf("Digite o ID da pizza a ser removida: ");
    scanf("%d", &id);
    if (id <= 0 || id > *qtdPizzas) {
        printf("Pizza nao encontrada.\n");
        return;
    }
    for (int i = id - 1; i < *qtdPizzas - 1; i++) {
        pizzas[i] = pizzas[i + 1];
    }
    (*qtdPizzas)--;
    printf("Pizza removida com sucesso.\n");
}

void exportarPizzas(Pizza* pizzas, int qtdPizzas, const char* filename) {
    FILE* file = fopen(filename, "w");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return;
    }
    
    for (int i = 0; i < qtdPizzas; i++) {
        fprintf(file, "%d;%s;%c;%.2f;%d\n", 
                pizzas[i].id, 
                pizzas[i].nome, 
                pizzas[i].tamanho, 
                pizzas[i].preco, 
                pizzas[i].num_ingredientes);
        
        for (int j = 0; j < pizzas[i].num_ingredientes; j++) {
            fprintf(file, "%s;%.2f\n", 
                    pizzas[i].ingredientes[j].nome, 
                    pizzas[i].ingredientes[j].preco);
        }
    }

    fclose(file);
    printf("Pizzas exportadas com sucesso para %s.\n", filename);
}

void importarPizzas(Pizza pizzas[], int* qtdPizzas, const char* filename) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return;
    }
    
    while (fscanf(file, "%d;%49[^;];%c;%f;%d\n", 
                  &pizzas[*qtdPizzas].id, 
                  pizzas[*qtdPizzas].nome, 
                  &pizzas[*qtdPizzas].tamanho, 
                  &pizzas[*qtdPizzas].preco, 
                  &pizzas[*qtdPizzas].num_ingredientes) == 5) {
        
        for (int j = 0; j < pizzas[*qtdPizzas].num_ingredientes; j++) {
            fscanf(file, "%49[^;];%f\n", 
                   pizzas[*qtdPizzas].ingredientes[j].nome, 
                   &pizzas[*qtdPizzas].ingredientes[j].preco);
            pizzas[*qtdPizzas].ingredientes[j].id = j + 1; // Atribui ID simples
        }
        (*qtdPizzas)++;
    }

    fclose(file);
    printf("Pizzas importadas com sucesso de %s.\n", filename);
}