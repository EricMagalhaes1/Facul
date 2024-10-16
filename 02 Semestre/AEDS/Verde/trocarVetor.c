#include <stdio.h>


int main(){

  int vetor [20];

  for(int i = 0; i < 20; i++){
    scanf("%d", &vetor[i]);
  }


  for(int a = 0; a < 10; a++){
      int b = 19 - a;
      int troca = vetor[b];
      vetor[b] = vetor[a];
      vetor[a] = troca;
  }

  for(int j = 0; j < 20;j++){
    printf("N[%d] = %d\n", j, vetor[j]);
  }

  return 0;
}