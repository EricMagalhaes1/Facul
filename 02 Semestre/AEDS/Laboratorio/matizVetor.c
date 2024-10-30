#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencherMatriz(int a, int b, int matriz[][b]){
    for(int i = 0; i < a; i++){
      for(int j = 0; j < b;j++ ){
        matriz[i][j] = rand()% 100;
      }
  }
}

void imprimirMatriz(int a, int b, int matriz[][b]){
  for(int i = 0; i < a; i++){
    for(int j = 0; j < b;j++ ){
      printf("%d ",matriz[i][j]);
    }
    printf("\n");
  }

}

int Diagonal(int a, int b, int matriz[][b]){
  int soma = 0;
  if(a != b){
    printf("Matriz nao quadrada!\n");
  }
  else{
    for(int i = 0; i < a; i++){
      soma += matriz[i][i];
    }
  }
  return soma;
}

int * somarMatriz(int a, int b, int matriz1[][b], int matriz2[][b]){
  int * matriz3 = malloc((a * b) * sizeof(int));;
  for(int i = 0; i < a; i++){
    for(int j = 0; j < b;j++ ){
      matriz3[i*b +j] = matriz1[i][j] + matriz2[i][j];
    }
    
  }
  return matriz3;
}

void matrizTransposta(int a, int b, int matriz1[][b], int matriz[b][a]){
  for(int i = 0; i < a; i++){ 
      for(int j = 0; j < b;j++ ){
        matriz[i][j] = matriz1[j][i];
      }
    } 
}

int * preencherMatriz2(int a, int b){
  int * matriz = malloc((a * b) * sizeof(int));;
  for(int i = 0; i < a*b; i++){
      matriz[i] = rand()% 100;
  }
  return matriz;
}


int main(){
  int matriz[3][2];
  int matriz1[2][3];
  int matriz2[3][3];


  preencherMatriz(2,3,matriz1);
  printf("Matriz Preenchida: \n");
  imprimirMatriz(2,3,matriz1);
  printf("Diagonal Principal: \n");
  printf("%d",Diagonal(2,3,matriz1));
  printf("\n");
  printf("Matriz Transposta: \n");
  matrizTransposta(2,3,matriz1,matriz);
  imprimirMatriz(3,2,matriz);

  printf("\n");

  preencherMatriz(3,3,matriz2);
  printf("Matriz Preenchida: \n");
  imprimirMatriz(3,3,matriz2);
  printf("Diagonal Principal: \n");
  printf("%d",Diagonal(3,3,matriz2));

  printf("\n");
  printf("\n");

  int * result = somarMatriz(3,3,matriz1,matriz2);
  printf("Matriz Somada\n");
  imprimirMatriz(3,3,result);

  printf("\n");
  printf("\n");

  int * result2 = preencherMatriz2(4,5);
  printf("Matriz preenchida\n");
  imprimirMatriz(4,5,result2);


  return 0;
}