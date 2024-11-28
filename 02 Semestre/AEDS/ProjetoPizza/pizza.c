#include <stdio.h>
#include "pizza.h"

void cadastrarPizza(Pizza pizzas[], int *qtdPizzas){
  if (*qtdPizzas >= 100) {
        printf("Limite de pizzas atingido!\n");
        return;
    }

    Pizza nova;
    nova.id = *qtdPizzas + 1;

    printf("Nome da pizza: ");
    scanf(" %[^\n]s", nova.nome);

    printf("Tamanho (P/M/G): ");
    scanf(" %c", &nova.tamanho);

    printf("Preço base: ");
    scanf("%f", &nova.preco);


    int n = 0;
    printf("Digite a quantidade de ingredientes da pizza:");
    scanf("%d", &n);
        for(int i = 0; i < n; i++){
            printf("Digite o ID do ingrediente %d: ", i + 1);
            scanf("%d", &nova.ingredientes[i].id);

            printf("Digite o nome do ingrediente %d: ", i + 1);
            getchar();
            fgets(nova.ingredientes[i].nome, 50, stdin);

            printf("Digite o preço do ingrediente %d: ", i + 1);
            scanf("%f", &nova.ingredientes[i].preco);
        }

    pizzas[*qtdPizzas] = nova;
    (*qtdPizzas)++;
    printf("Pizza adicionada com sucesso!\n");
    //system("cls");

}

void visualizarPizzas(Pizza pizzas[], int qtdPizzas) {
    for (int i = 0; i < qtdPizzas; i++) {
        printf("ID: %d, Nome: %s, Tamanho: %c, Preço: %.2f\n",
               pizzas[i].id, pizzas[i].nome, pizzas[i].tamanho, pizzas[i].preco);
    }
}
/*void salvar_pizzas(Pizza *pizzas, int num_pizzas, const char *filename) {
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
*/