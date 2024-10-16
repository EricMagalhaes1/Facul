#include <stdio.h>

int main() {
  int N;
  
  scanf("%d", &N);
  
  int ciclo[2 * N];
  int pontos_atingidos[N + 1];  
  
  for (int i = 1; i <= N; i++) {
      pontos_atingidos[i] = 0;
  }
  
  for (int i = 0; i < 2 * N; i++) {
      scanf("%d", &ciclo[i]);
  }
  
  int pontos_cobertos = 0;

  for (int i = 0; i < 2 * N; i++) {
      int ponto = ciclo[i];

      if (pontos_atingidos[ponto] == 0) {
          pontos_atingidos[ponto] = 1;
          pontos_cobertos++;
      }
      if (pontos_cobertos == N) {
          printf("%d\n", i + 1);
          return 0;
      }
  }
  printf("0\n");

  return 0;
}
