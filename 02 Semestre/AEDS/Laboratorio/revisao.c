#include <stdio.h>
#include <string.h>


typedef struct Paciente{
  char nome[50];
  int codigo;
  char genero;
  int historico[100];
  int total;
}Paciente;

Paciente cadastrar(char * nome, int codigo,char genero){
  Paciente p;

  p.codigo = codigo;
  strcpy(p.nome,nome);
  p.genero = genero;
  p.total = 0;

  printf("Paciente cadastrado com sucesso!!");

  return p;
}

void inserirDoenca(Paciente * p, int doenca){
  p->historico[p->total] = doenca;
  p->total ++;
}

int totalDoencas(Paciente p[], int n, int doenca){
  int total = 0;

  for(int i = 0; i < n;i++){
    for(int j = 0; j < p[i].total; j++){
      if(p[i].historico[j] == doenca){
        total ++;
      }
    }
  }
  return total;
}

int main(){

  Paciente p = cadastrar("Eric",1,'M');

  return 0;
}