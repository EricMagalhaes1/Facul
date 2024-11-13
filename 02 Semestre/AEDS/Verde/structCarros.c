#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Carro{

  char marca[50];
  int ano;
  double preco; 
}Carro;

Carro inserirCarro(){
  Carro c;

  printf("Digite a marca do carro que deseja inserir: ");
  scanf("%s",&c.marca);

  printf("Digite o ano do carro: ");
  scanf("%d", &c.ano);
  
  printf("Digite o valor do carro: ");
  scanf("%lf", &c.preco);

  return c;
}



int main(){

  int n = 0;

  printf("Digite quantos carros deseja inserir: ");
  scanf("%d", &n);

  Carro c[n];

  for(int i = 0; i < n; i++){
    c[i] = inserirCarro();
  }

  double maxVal = 0;

  printf("Digite o valor maximo do carro para filtrar: ");
  scanf("%lf", &maxVal);
  printf("Carros com preco menor que %.2lf:\n",maxVal);
  for(int i = 0; i < n; i ++){
    if(c[i].preco < maxVal){
      printf("Marca: %s, Ano: %d, Preco: %.2lf\n", c[i].marca, c[i].ano, c[i].preco);
    }
  }
  printf("\n");

  return 0;
}