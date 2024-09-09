#include <stdio.h>
#include "cabecalho.h"
#include "metodos.h"

int metodo0311() {
    cabecalho("AED 1 ED03","13/03/2024","1523288","Eric Magalhaes","0311","Mostrar as letras maiusculas de uma palavra");
    char palavra[100];
    
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
    mostrar_maiusculas(palavra);
    
    return 0;
}

int metodo0312() {
    char palavra[100];
    cabecalho("AED 1 ED03","13/03/2024","1523288","Eric Magalhaes","0312","Mostrar as letras minusculas de uma palavra");
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
    mostrar_minusculas(palavra);
    
    return 0;
}

int metodo0313() {
    char palavra[100];
    cabecalho("AED 1 ED03","13/03/2024","1523288","Eric Magalhaes","0313","Mostrar as letras minusculas de uma palavra percorrendo inversamente");
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
    mostrar_maiusculas_invertidas(palavra);
    
    return 0;
}

int metodo0314() {
    char palavra[100];
    cabecalho("AED 1 ED03","13/03/2024","1523288","Eric Magalhaes","0314","Mostrar os caracteres especiais");
    
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
    mostrar_caracteres(palavra);
    mostrar_minusculas(palavra);
    mostrar_maiusculas(palavra);
    
    return 0;
}

int metodo0315() {
    char palavra[100];
    cabecalho("AED 1 ED03","13/03/2024","1523288","Eric Magalhaes","0315","Mostrar os numeros em ordem inversa");
    
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
    mostrar_digitos_invertidos(palavra);
    
    return 0;
}

int metodo0316() {
    char palavra[100];
    cabecalho("AED 1 ED03","13/03/2024","1523288","Eric Magalhaes","0316","Contar e mostrar tudo que nao for digito nem letra");
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
    mostrar_caracteres(palavra);
    
    return 0;
}


int metodo0317() {
    int a,b,c;

    cabecalho("AED 1 ED03","13/03/2024","1523288","Eric Magalhaes","0317","Contar e mostrar tudo que nao for digito nem letra");
    printf("Digite o intervalo [a:b]: ");
    scanf("%d %d", &a, &b);

    printf("Digite a quantidade de valores testados: ");
    scanf("%d", &c);

    contar_multiplos_de_6(a, b, c);

    return 0;
}

int metodo0318() {
    int a,b,c;

    cabecalho("AED 1 ED03","13/03/2024","1523288","Eric Magalhaes","0318","Contar e mostrar tudo que nao for digito nem letra");
    printf("Digite o intervalo [a:b]: ");
    scanf("%d %d", &a, &b);

    printf("Digite a quantidade de valores testados: ");
    scanf("%d", &c);

    contar_multiplos_de_4(a, b, c);

    return 0;
}

int metodo0319() {
  float a, b;
    int n;
    cabecalho("AED 1 ED03","13/03/2024","1523288","Eric Magalhaes","0319","Contar e mostrar tudo que nao for digito nem letra");
    printf("Digite o intervalo [a:b]: ");
   scanf("%f %f", &a, &b);

    if (b <= a) {
        printf("Erro: b deve ser maior que a.\n");
        return 1;
    }

    printf("Digite a quantidade de valores a serem testados: ");
    scanf("%d", &n);

    contar_inteiros_pares(a, b, n);

    return 0;
}

int metodo0320() {
    float a, b;
    int n;
    
    cabecalho("AED 1 ED03","13/03/2024","1523288","Eric Magalhaes","0320","Contar e mostrar tudo que nao for digito nem letra");
    printf("Digite o valor de a (0 < a < 1): ");
    scanf("%f", &a);
    printf("Digite o valor de b (0 < b < 1): ");
    scanf("%f", &b);

    if (a <= 0 || a >= 1 || b <= 0 || b >= 1) {
        printf("Erro: a e b devem ser maiores que 0 e menores que 1.\n");
        return 1;
    }

    printf("Digite a quantidade de valores a serem testados: ");
    scanf("%d", &n);

    contar_fora_intervalo(a, b, n);

    return 0;
}

int main() {
    int x;

    do {
        printf("EXEMPLO0300 - Programa - v0.0\n");
        printf("Opcoes\n");
        printf("1 - Metodo 0311 | 2 - Metodo 0312\n");
        printf("3 - Metodo 0313 | 4 - Metodo 0314\n");
        printf("5 - Metodo 0315 | 6 - Metodo 0316\n");
        printf("7 - Metodo 0317 | 8 - Metodo 0318\n");
        printf("9 - Metodo 0319 | 9 - Metodo 0320\n");
        printf("0 - parar\n");
        printf("Entrar com uma opcao: ");
        scanf("%d", &x);
        while (getchar() != '\n'); // Limpar o buffer de entrada

        switch (x) {
            case 0: 
                printf("Encerrando o programa.\n");
                break;
            case 1: 
                metodo0311(); 
                break;
            case 2: 
                metodo0312(); 
                break;
            case 3: 
                metodo0313(); 
                break;
            case 4: 
                metodo0314(); 
                break;
            case 5: 
                metodo0315(); 
                break;
            case 6: 
                metodo0316(); 
                break;
            case 7: 
                metodo0317(); 
                break;
            case 8: 
                metodo0318(); 
                break;
            case 9: 
                metodo0319(); 
                break;
            case 10: 
                metodo0320(); 
                break;
            default:
                printf("Valor Invalido\n");
        } 
    } while (x != 0);

    printf("Apertar ENTER para terminar\n");
    return 0;
}