#include <stdio.h>
#include <stdlib.h>
#include "pizza.h"

#define MAX_PIZZA 100


void opcao1(Pizza p[], int *qtdPizza){
    int opcao = 0;   
    
    do {

        printf("\n=== Sistema de Gerenciamento de Pizzaria ===\n");
        printf("1. Adionar Pizzas\n");
        printf("2. Gerenciar \n");
        printf("3. Vizualisar Pizzas \n");
        printf("4. Sair\n");
        printf("==========================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarPizza(p,qtdPizza);
                break;
            case 2:
                visualizarPizzas(p,*qtdPizza);
                break;
            /*
            case 3:
                opcao3();
                break;
            case 4:
                sair();
                break;*/
            default:
                printf("\nOpção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);
}



int main() {
    int opcao;
    int qtdPizza = 0;
   
    Pizza p[MAX_PIZZA];
    //Ingrediente ing[100];

    do {
        printf("\n=== Sistema de Gerenciamento de Pizzaria ===\n");
        printf("1. Gerenciar Pizzas\n");
        printf("2. Gerenciar Ingredientes\n");
        printf("3. Registrar Venda\n");
        printf("4. Exportar Dados\n");
        printf("5. Importar Dados\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                opcao1(p, &qtdPizza);
                break;
            /*case 2:
                opcao2();
                break;
            case 3:
                opcao3();
                break;
            case 4:
                sair();
                break;*/
            default:
                printf("\nOpção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);
}