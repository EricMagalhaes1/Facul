#include <stdio.h>


void adicionarRegistro(char nmArquivo[]){

  FILE * pF = fopen(nmArquivo,"a");

  char nome[50];
  int idade;
  float nota;

  printf("Digite o nome do aluno: ");
  scanf("%s", nome);
  printf("Digite a idade do aluno: ");
  scanf("%d", &idade);
  printf("Digite a nota do aluno: ");
  scanf("%f", &nota);

  fprintf(pF,"Nome: %s, Idade: %d, Nota: %.2f\n",nome,idade,nota);

  fclose(pF);

  printf("Dados salvos com sucesso!!\n\n");

}
void lerRegistro(char nmArquivo[]){
  FILE * pF = fopen(nmArquivo,"r");
  char buffer[255];

  while(fgets(buffer,255, pF)){
    printf("%s", buffer);
  }

  fclose(pF);
}


int main(){

  int opcao;
  char nmArquivo[50];

  printf("Digite o nome do arquivo: \n");
  scanf("%s", nmArquivo);
  
  do
  {
    printf("Escolha uma opcao: \n");
    printf("1 - Escrever arquivo\n");
    printf("2 - Ler arquivo\n");
    printf("3 - Sair\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
      adicionarRegistro(nmArquivo);
      break;
    
    case 2:
      lerRegistro(nmArquivo);
    default:
      break;
    }
  } while (opcao != 3);
  
}