#include <stdio.h>
#include <math.h>

int main(){
  int n;
  int decimal = 0;
  scanf("%d", &n);

  int vetor[n];

  for(int i = 0; i < n;i++){
    scanf("%d", &vetor[i]);
  }

  for(int i = 0; i < n; i++){
    decimal += vetor[i] * pow(2, n - 1 - i);
  }

  printf("%d", decimal);
  
  return 0;
}