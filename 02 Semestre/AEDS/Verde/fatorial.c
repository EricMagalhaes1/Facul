#include <stdio.h>

int fatorial(int n){
  
  if(n <= 1){
    return 1;
  }
  else{
    return n * fatorial(n-1);
  }
}

int main (){

  int n = 20;

  int resultado = fatorial(n);

  printf("%d", resultado);

  return 0;
}