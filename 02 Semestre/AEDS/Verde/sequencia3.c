#include <stdio.h>  

int fatorial(int n){
  
  if(n <= 1){
    return 1;
  }
  else{
    return n * fatorial(n-1);
  }
}


int main(){

  int n = 0;
  float r = 1.0;
  scanf("%d", &n);

  for (int i = 1; i <=n;i++){
    r += 1.0/fatorial(i);
  }

  printf("%.2f", r);

  return 0;
}