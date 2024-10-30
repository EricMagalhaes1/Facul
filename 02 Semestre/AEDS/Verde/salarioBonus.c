#include <stdio.h>


int main(){
 char nome[50]; 
 double salario, bonus, vendas;

  scanf(" %s", &nome);
  scanf(" %lf",&salario);
  scanf(" %lf",&vendas);

  bonus = vendas * 0.15;
  salario += bonus;

  printf("TOTAL = R$ %.2lf", salario);

  return 0;
}