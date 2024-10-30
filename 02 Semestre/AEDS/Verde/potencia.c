#include <stdio.h>

int potencia(int a, int b){

  if(b == 0){
    return 0;
  }
  else if(b == 1){
    return a;
  }
  else {
    return a * potencia(a, b - 1);
  }
}

int main() {
  
  int a = 5;  
  int b = 3;

  int resultado = potencia(a , b);

  printf("A %d elevado a %d = %d \n", a, b, resultado);

  return 0;
}