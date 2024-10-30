#include <stdio.h>

int main(){
  int horas = 24;
  int inicio, fim, total;

  scanf("%d %d", &inicio, &fim);

  if (inicio < fim){
    total = fim - inicio;
    printf("O JOGO DUROU %d HORA(S)", total);
  }
  else if(inicio > fim){
    total =( horas + fim)- inicio ;
    printf("O JOGO DUROU %d HORA(S)", total);
  }
  else if(inicio == fim){
    printf("O JOGO DUROU %d HORA(S)", horas);
  }

  return 0;
}