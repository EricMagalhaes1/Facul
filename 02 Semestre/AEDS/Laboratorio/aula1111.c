#include <stdio.h>
#include <stdlib.h>

void imprimirArray(int  array[], int tamanho){

  if(tamanho == 0){
    return;
  }
  
  printf("%d ", array[0]);

  imprimirArray(array + 1 ,tamanho -   1);
}

int * multiplicarMartiz(int l1, int c1, int matriz1[l1][c1], int c2, int matriz2[c1][c2]){

  int *matriz3 = malloc((c1*c2)*sizeof(int));

  for(int i = 0 ; i < l1; i++){
    for(int j = 0;j < c2;j++){
      matriz3[i * c2 + j] = 0;
      for(int k = 0;k < c1; k++){
        matriz3[i * c2 + j] += matriz1[i][k] * matriz2[k][j];   
      }
    }
  }
}

int main(){
  int array[] = {1,2,3,4,5};
  int tamanho = sizeof(array) / sizeof(array[0]);

  int matriz1[2][3] = {{1, 2, 3}, {4, 5, 6}};
  int matriz2[3][2] = {{7, 8}, {9, 10}, {11, 12}};

  int * resposta = (3, 2, matriz1, 2, matriz2);

      for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", resposta[i * 3 + j]);
        }
        printf("\n");
    }
    printf("\n");

  imprimirArray(array,tamanho);

  return 0;
}