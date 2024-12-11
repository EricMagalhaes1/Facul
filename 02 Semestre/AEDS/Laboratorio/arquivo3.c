#include <stdio.h>

int main(){
  
  char nmArquivo[50];
  char buffer[255];

  printf("Digite o nome do arquivo\n");
  scanf("%s", nmArquivo);

  FILE * pF = fopen(nmArquivo,"a");

  printf("Digite oque deve ser adicionado ao arquivo: \n");
  scanf(" %[^\n]", buffer);

  fprintf(pF, buffer);

  fclose(pF);
  return 0;
}