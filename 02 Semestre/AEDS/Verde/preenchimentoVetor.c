#include <stdio.h>

int main(){

  int vetor [10];
  int n;

  scanf("%d", &n);
  vetor[0] = n;
  
  for(int i = 1; i < 10; i++){
    vetor[i] = 2 * vetor[i-1];
  }

  for(int j = 0; j < 10;j++){
    printf("N[%d] = %d\n", j, vetor[j]);
  }

  return 0;
}