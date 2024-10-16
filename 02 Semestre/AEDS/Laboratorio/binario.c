#include <stdio.h>

void imprimiBinario(int binario){

  if (binario > 0){
    imprimiBinario(binario/2);
    printf("%d", binario % 2);
  }
}


int main(){
  int n = 0;
  scanf("%d", &n);
  imprimiBinario(n);
}