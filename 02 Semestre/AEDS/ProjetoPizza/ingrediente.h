#ifndef INGREDIENTE_H
#define INGREDIENTE_H

#define MAX_INGREDIENTES 50
#define MAX_NOME 50

typedef struct {
    int id;
    char nome[MAX_NOME];
    float preco;
} Ingrediente;

// Funções CRUD para Ingredientes
void adicionarIngrediente(Ingrediente* ingredientes, int* num_ingredientes);
void visualizarIngredientes(Ingrediente* ingredientes, int num_ingredientes);
void editarIngrediente(Ingrediente* ingredientes, int num_ingredientes);
void removerIngrediente(Ingrediente* ingredientes, int* num_ingredientes);

#endif