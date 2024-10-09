#include <stdio.h>


int main(){

  int x = 5, y = 6;
  int *px = &x;
  int *py = &y;


  *py = (*py) * (*py);
  *px = *px * 2;

  printf("x=%d, y=%d", x,y);

}