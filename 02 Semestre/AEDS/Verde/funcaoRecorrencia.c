#include <stdio.h>


int F(int n) {
  if (n == 0) {
      return 1;
  } else {
    return 2 * F(n - 1);
  }
}
int main() {
  int n;

  scanf("%d", &n);
  
  printf("%d", F(n));
  
  return 0;
}