#include <stdio.h>
#include <string.h>

typedef struct Produto{
  int id;
  char nome[50];
  float preco;
  int quantidade;
}Produto;

Produto cadastrarProd(){

  Produto p;
  getchar();
  printf("Digite o nome do produto: ");
  fgets(p.nome,sizeof(p.nome), stdin);
  printf("Digite o ID:");
  scanf("%d" , &p.id);
  printf("Digite o valor do produto: ");
  scanf("%f" , &p.preco);
  printf("Digite a quantidade de produtos: ");
  scanf("%f" , &p.quantidade);
  printf("\n");

  return p;
}

float precoMedio(Produto p[], int n){
  float soma = 0;

  for(int i = 0; i < n;i++){
    soma += p[i].preco;
  }

  return soma/n;
}

void registrarVenda(char * pVenda, Produto * p, int n){

  for(int i = 0; i < n; i++){
    if((strcmp(p[i].nome, pVenda) && p[i].quantidade > 0) == 0){
      p[i].quantidade --;
      return;
    }
    printf("Venda nâo completada!\n");
  }
}

int main(){
  int a;
  Produto p[3];
  
  printf("Digite quantos produtos deseja insetir: ");
  scanf("%d", &a);

  for(int i = 0; i < a; i++){
    p[i] = cadastrarProd();
  }

  float media = precoMedio(p, a);
  printf("Preco medio: R$%.2f", media);

  return 0;
}