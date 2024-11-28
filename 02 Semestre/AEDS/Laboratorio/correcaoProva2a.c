#include <stdio.h>

int main(){
  int a[3];
  int tmp;
  
  for(int i = 0; i < 3;i++){
    scanf("%d", (a+i));
  }

  for(int i = 0;i < 3; i++){
    for(int j = i + 1; j < 3; j++){
      if(*(a+i) > *(a+j)){
        tmp = *(a+i);
        *(a+i) = *(a+j);
        *(a+j) = tmp;
      }
    }
  }

    for(int i = 0; i < 3;i++){
    printf("%d", *(a+i));
  }
}