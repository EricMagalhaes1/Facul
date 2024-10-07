#include <stdio.h>

int soma_digitos(int n){

  if (n < 10){
    return n;
  }
  else{
    printf("%d\n", (n % 10));
    printf("%d\n", (n / 10));
    return (n % 10) + soma_digitos(n / 10);
  }
}

int main() {
    int n = 25437689;  
    int resultado = soma_digitos(n);

    printf("A soma dos digitos de %d e %d\n", n, resultado);

    return 0;
}