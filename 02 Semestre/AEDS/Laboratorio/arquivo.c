#include <stdio.h>

int  main(){

  FILE *pF = fopen("teste.txt", "a");

  fprintf(pF, "\nPatrick Estrela");


  fclose(pF);



  if(remove("teste.txt") == 0){
    printf("Arquivo deletaco com sucesso");
  }
  else{ 
    printf("Erro ao deletar o arquivo");
  }

  return 0;
}