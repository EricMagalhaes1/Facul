#include <stdio.h>
#include "pizza.h"
#include "ingrediente.h"
#include "pizza.c"
#include "ingrediente.c"

void menuPizza(Pizza pizzas[], int qtdPizza){
     int op;
    do {
        printf("\nMenu de Pizzas:\n");
        printf("1. Adicionar Pizza\n");
        printf("2. Visualizar Pizzas\n");
        printf("3. Editar Pizza\n");
        printf("4. Remover Pizza\n");
        printf("5. Voltar ao Menu Principal\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                adicionarPizza(pizzas, &qtdPizza);
                break;
            case 2:
                visualizarPizzas(pizzas, qtdPizza);
                break;
            case 3:
                editarPizza(pizzas, qtdPizza);
                break;
            case 4:
                removerPizza(pizzas, &qtdPizza);
                break;
            case 5:
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (op != 5);
}

void menuIngredientes(Ingrediente ingredientes[],int qtdIngredientes){
    int op;
    do {
        printf("\nMenu de Ingredientes:\n");
        printf("1. Adicionar Ingrediente\n");
        printf("2. Visualizar Ingredientes\n");
        printf("3. Editar Ingrediente\n");
        printf("4. Remover Ingrediente\n");
        printf("5. Voltar ao Menu Principal\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                adicionarIngrediente(ingredientes, &qtdIngredientes);
                break;
            case 2:
                visualizarIngredientes(ingredientes, qtdIngredientes);
                break;
            case 3:
                editarIngrediente(ingredientes, qtdIngredientes);
                break;
            case 4:
                removerIngrediente(ingredientes, &qtdIngredientes);
                break;
            case 5:
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (op != 5);
}

int main() {
    Pizza pizzas[MAX_PIZZAS];
    Ingrediente ingredientes[MAX_INGREDIENTES];
    int qtdPizza = 0;
    int qtdIngredientes = 0;
    int escolha;

    do {
        printf("\nMenu:\n");
        printf("1. Gerenciar Pizzas\n");
        printf("2. Gerenciar Ingredientes\n");
        printf("3. Exportar Pizzas\n");
        printf("4. Importar Pizzas\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1: 
                menuPizza(pizzas,qtdPizza);
                break;
            case 2: 
                menuIngredientes(ingredientes,qtdIngredientes);
                break;
            case 3: {
                char filename[50];
                printf("Digite o nome do arquivo para exportar: ");
                scanf("%49s", filename);
                exportarPizzas(pizzas, qtdPizza, filename);
                break;
            }

            case 4: {
                char filename[50];
                printf("Digite o nome do arquivo para importar: ");
                scanf("%49s", filename);
                importarPizzas(pizzas, &qtdPizza, filename);
                break;
            }

            case 5:
                printf("Saindo do sistema...\n");
                break;

            default:
                printf("Opção inválida.\n");
        }
    } while (escolha != 3);

    return 0;
}