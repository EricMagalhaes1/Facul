#ifndef pizza
#define pizza

#include "ingrediente.h"
#define MAX_INGREDIENTES 10

typedef struct Pizza{

  int id;
  char nome[50] ;
  char tamanho; //P,M,G
  float preco;
  Ingrediente ingredientes [MAX_INGREDIENTES];
}Pizza;

void cadastrarPizza(Pizza pizzas[], int *qtdPizzas);
void visualizarPizzas(Pizza pizzas[], int qtdPizzas);

#endif //pizza