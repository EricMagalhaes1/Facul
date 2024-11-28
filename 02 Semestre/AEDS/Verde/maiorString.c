#include <stdio.h>
#include <string.h>


int main(){

  int n = 0;

  char temp [50];
  char maior [50] = "" ;
  char menor [50] = "";

  scanf("%d", &n);

  for(int i = 0; i < n; i++){
    scanf("%s", temp);

    if(strlen(temp) > strlen(maior)){
      strcpy(maior,temp);
    }
    
    else if(strlen(temp) < strlen(menor) || strlen(menor) == 0){
      strcpy(menor,temp);
    }
  }
  printf("%s\n%s\n", maior, menor);

  return 0;
}