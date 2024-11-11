#include <stdio.h>

typedef struct Provas{
  char nome [50];
  int mat;
  char resposta[30];
}Provas;

Provas cadastrarProvas(){

  Provas p;
  printf("Digite a Matricula: ");
  scanf("%d", &p.mat);
  printf("Digite o nome: ");
  fgets(p.nome,50,stdin);

  for(int i = 0;i < 30; i++){
    printf("Digite as respostas %d",i+1);
    scanf(" %c",&p.resposta[i]);
  }

  return p;
}

int main(){
  
  int n;
  printf("Digite a quantidade de alunos");
  scanf("%d", &n);

  Provas p[n];

  for(int i = 0; i < n; i++)
  {
    p[i] = cadastrarProvas();
  }
}