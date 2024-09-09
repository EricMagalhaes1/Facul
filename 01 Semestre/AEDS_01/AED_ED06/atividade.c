#include <stdio.h>
#include <math.h>
#include "cabecalho.h"
#include "metodos.h"
int metodo0611() {
    int valor;


    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("O valor deve ser maior que zero.\n");
        return 1;
    }

    printf("Os multiplos de 6 sao: \n");
    mostraMultiplosSeis(valor, 0);

    return 0;
}

int metodo0612() {
    int valor;

    printf("Digite um valor inteiro: \n");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("O valor deve ser maior que zero.\n");
        return 1;
    }




    printf("Os multiplos de 6 em ordem decrescente sao: \n");
    mostrarMultiplosSeisDecrescente(valor, 0);

    return 0;
}

int metodo0613() {
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("O valor deve ser maior que zero.\n");
        return 1;
    }

    printf("O resultado e : \n");
    mostrarFracaoInversaSeis(valor, 0);
    return 0;
}

int metodo0614() {
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("O valor deve ser maior que zero.\n");
        return 1;
    }

    printf("O resultado e : \n");
    mostraFracaoSeis(valor, 1);
    return 0;
}

int metodo0615() {
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("O valor deve ser maior que zero.\n");
        return 1;
    }

    printf("O resultado e : \n");
    somarSeisADois(valor, 0);
    return 0;
}

int metodo0616() {
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("O valor deve ser maior que zero.\n");
        return 1;
    }

    printf("O resultado e : \n");
    somarSeisADoisReverso(valor, valor);
    return 0;
}
int metodo0617() {
 char string[100]; 


    printf("Digite uma sequencia de caracteres: ");
    scanf("%s", string);

    printf("Caracteres separados:\n");
    mostrarCaracteres(string, 0);

    return 0;
}

int metodo0618(){
      char string[100];

    printf("Digite uma sequencia de caracteres: ");      
    scanf("%s", string);
    
    printf("Quantidade de digitos pares na sequencia: %d\n", contarDigitosPares(string, 0));

    return 0;
}
int metodo0619(){
    char string[100];
    
    printf("Digite uma sequencia de caracteres: ");
    scanf("%s", string);
    
    printf("Quantidade de digitos menores que L: %d\n", contarLetrasMaiorL(string, 0));

    return 0;
}
int metodo0620(){
 int valor; // Você pode modificar esse valor conforme necessário

    printf("Digite um valor: ");
    scanf("%d", &valor);
    // Chama a função recursiva para calcular o termo par da série de Fibonacci
    printf("Soma dos termos pares da serie de Fibonacci para n = %d: %d\n", valor, termoParFibonacci(valor));

    return 0;
}

int main() {
    int x;

    do {
        printf("\nAtivide AEDS1_06 - Programa \n");
        printf("Opcoes\n");
        printf("1 - Metodo 0611 | 2 - Metodo 0612\n");
        printf("3 - Metodo 0613 | 4 - Metodo 0614\n");
        printf("5 - Metodo 0615 | 6 - Metodo 0616\n");
        printf("7 - Metodo 0617 | 8 - Metodo 0618\n");
        printf("9 - Metodo 0619 | 10 - Metodo 0620\n");
        printf("0 - parar\n");
        printf("Entrar com uma opcao: ");
        scanf("%d", &x);
        while (getchar() != '\n'); // Limpar o buffer de entrada

        switch (x) {
            case 0: 
                printf("Encerrando o programa.\n");
                break;
            case 1: 
                metodo0611(); 
                break;
       case 2: 
                metodo0612(); 
                break;
              case 3: 
                metodo0613(); 
                break;
        case 4: 
                metodo0614(); 
                break;
              case 5: 
                metodo0615(); 
                break;
            case 6: 
               metodo0616(); 
                break;
            case 7: 
                metodo0617(); 
                break;
         case 8: 
               metodo0618(); 
                break;
          case 9: 
                metodo0619(); 
                break;
           case 10: 
               metodo0620(); 
                break;  
           default:
                printf("Valor Invalido\n");
        } 
    } while (x != 0);

    printf("Apertar ENTER para terminar\n");
    return 0;
}