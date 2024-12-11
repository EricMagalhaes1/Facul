#include <stdio.h>
#include <stdlib.h>


void cadastrarVetor(int * v,int n){

  for(int i = 0; i < n; i++){
    v[i] = rand() % 5;
  }
}

float calcularMedia(int * v, int n, int i){
  
  if(i == 0){
    return 0;
  }
  float soma = 0.0;
  soma += v[i];
  return soma/n + calcularMedia(v,n,i-1);

}
float dp(){

}

void geraMatriz(int mat[][3], int * v,int l, int c){
  int k = 0;
  for(int i = 0; i < l;i++){
    for(int j = 0; j < c; j++){
      mat[i][j] = v[k];
      k++;
    }
  }
}

int main(){
  int n;
  scanf("%d", &n);
  int v[n];
  int matriz[2][3];
  cadastrarVetor(v,n);

  for(int i = 0; i < n; i++){
    printf("%d ",v[i]);
  }
  printf("\n Media do Vetor: %f", calcularMedia(v,n,n-1));
  
  geraMatriz(matriz,v,2,3);

  return 0;
}