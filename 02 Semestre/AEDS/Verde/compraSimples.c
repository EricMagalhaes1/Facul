#include <stdio.h>


int main(){
  int prod, quantidade;
  double valor, total;

  for(int i = 0; i < 2; i++){
    scanf("%d %d %lf", &prod,&quantidade,&valor);
    total += valor*quantidade;
  }

  printf("VALOR A PAGAR: R$ %.2lf", total);

}