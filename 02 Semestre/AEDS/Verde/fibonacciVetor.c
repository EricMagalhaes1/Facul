#include <stdio.h>

int fibonacci(int n){
  if(n == 0){
    return 0;
  }
  else if(n == 1 ){
    return 1;
  }
  else{
    return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(){

  int vetor [10];
  int n;
  scanf("%d", &n);

  if(n <= 60){
    for(int i = 0; i < n; i++){
      scanf("%d", &vetor[i]);
    }

    for(int j = 0; j < n;j++){
      int fib = fibonacci(vetor[j]);
      printf("Fib(%d) = %d\n", vetor[j],fib );
    }
  }

  return 0;
}