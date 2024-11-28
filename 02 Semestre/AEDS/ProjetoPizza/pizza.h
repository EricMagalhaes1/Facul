#ifndef pizza
#define pizza

#include "ingrediente.h";
#define MAX_INGREDIENTES 10;
typedef struct Pizza{

  int id;
  char nome[50] ;
  char tamanho; //P,M,G
  float preco;
  Ingrediente ingredientes [10];

}Pizza;

void salvar_pizzas(Pizza *pizzas, int num_pizzas, const char *filename);
int ler_pizzas(Pizza **pizzas, const char *filename);

#endif //pizza