#include <stdio.h>
#include <stdbool.h>



bool f1(char *s, int esq, int dir){

  if( esq>=dir){
    return true;
  }
  else if(s[esq] != s[dir]){
    return false;
  }
  else{
    return f1(s,esq + 1, dir - 1);
  }
}


int main(){

  int dir = 4,esq = 0;
  char teste[] = "";

  bool resposta = f1(teste,esq, dir);

  printf("%d",resposta);

  return 0;
}