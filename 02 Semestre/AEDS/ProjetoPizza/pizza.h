#ifndef PIZZA_H
#define PIZZA_H

#include "ingrediente.h"


#define MAX_PIZZAS 50
#define MAX_NOME 50
/*
typedef struct {
    int id;
    char nome[MAX_NOME];
    float preco;
} Ingrediente;
*/ 

typedef struct {
    int id;
    char nome[MAX_NOME];
    char tamanho; // P, M, G
    float preco;
    Ingrediente ingredientes[MAX_INGREDIENTES];
    int num_ingredientes;
} Pizza;

// Funções CRUD para Pizzas
void adicionarPizza(Pizza* cardapio, int* num_pizzas);
void visualizarPizzas(Pizza* cardapio, int num_pizzas);
void editarPizza(Pizza* cardapio, int num_pizzas);
void removerPizza(Pizza* cardapio, int* num_pizzas);

#endif