#include <stdio.h>
#include <string.h> 
#include <math.h>

void mostrar_maiusculas(char palavra[]) {
    int i = 0;
    int count_maiusculas = 0;
    
    printf("Letras maiusculas na palavra: ");
    
    while (palavra[i] != '\0') {
        if (palavra[i] >= 'A' && palavra[i] <= 'Z') {
            printf("%c ", palavra[i]);
            count_maiusculas++;
        }
        i++;
    }
    
    printf("\n");
    printf("Total de letras maiusculas : %d\n", count_maiusculas );
}

void mostrar_maiusculas_invertidas(char palavra[]) {
    int count_digitos = 0;
    int tamanho = strlen(palavra);

    printf("Digitos na palavra (invertidos): ");
    
    while (tamanho >= 0) {
        if  (palavra[tamanho] >= 'A' && palavra[tamanho] <= 'Z') {
            printf("%c ", palavra[tamanho]);
            count_digitos++; 
        }
        tamanho--;
    }
    
    printf("\nTotal de caracteres que sao digitos: %d\n", count_digitos);
}

void mostrar_minusculas(char palavra[]) {
    int i = 0;
    int count_minusculas = 0;
    
    printf("Letras minusculas na palavra: ");
    
    while (palavra[i] != '\0') {
        if (palavra[i] >= 'a' && palavra[i] <= 'z') {
            printf("%c ", palavra[i]);
            count_minusculas ++;
        }
        i++;
    }
    
    printf("\n");
    printf("Total de letras maiusculas : %d\n", count_minusculas );
}

void mostrar_caracteres(char palavra[]) {
    int i = 0;
    int count_caracteres_especiais = 0;
    
    printf("Caracteres especiais na palavra: ");
    
    while (palavra[i] != '\0') {
        if (!((palavra[i] >= 'A' && palavra[i] <= 'Z') || (palavra[i] >= 'a' && palavra[i] <= 'z') || (palavra[i] >= '0' && palavra[i] <= '9'))) {
            printf("%c ", palavra[i]);
            count_caracteres_especiais ++;
        }
        i++;
    }
    
    printf("\n");
    printf("Total de letras maiusculas : %d\n", count_caracteres_especiais );
}

void mostrar_digitos(char palavra[]) {
    int i = 0;
    int count_digitos = 0;
    
    printf("Digitos na palavra: ");
    
    while (palavra[i] != '\0') {
        if  (palavra[i] >= '0' && palavra[i] <= '9') {
            printf("%c ", palavra[i]);
            count_digitos++; 
        }
        i++;
    }
    
    printf("\nTotal de caracteres que nao sao letras nem digitos: %d\n", count_digitos);
}

void mostrar_digitos_invertidos(char palavra[]) {
    int count_digitos = 0;
    int tamanho = strlen(palavra);

    printf("Digitos na palavra (invertidos): ");
    
    while (tamanho >= 0) {
        if  (palavra[tamanho] >= '0' && palavra[tamanho] <= '9') {
            printf("%c ", palavra[tamanho]);
            count_digitos++; 
        }
        tamanho--;
    }
    
    printf("\nTotal de caracteres que sao digitos: %d\n", count_digitos);
}


void contar_multiplos_de_6(int a, int b, int n) {
    int multiplos = 0;
    int x;

    printf("Digite os %d valores:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &x);

        if (x >= a && x <= b && x % 6 == 0) {
            multiplos++;
        }
    }

    printf("Quantidade de valores multiplos de 6 no intervalo [%d:%d]: %d\n", a, b, multiplos);
}

void contar_multiplos_de_4(int a, int b, int n) {
    int multiplos = 0;
    int x;

    printf("Digite os %d valores:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &x);

        if  ((x >= a && x <= b) && (x % 4 == 0 || x % 5 != 0))  {
            multiplos++;
        }
    }

    printf("Quantidade de valores multiplos de 6 no intervalo [%d:%d]: %d\n", a, b, multiplos);
}

void contar_inteiros_pares(float a, float b, int n) {
    int count_pares = 0;
    float x;

    printf("Digite os %d valores:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%f", &x);

        if (x > a && x < b) {
            int parte_inteira = (int)x;
            if (parte_inteira % 2 == 0) {
                count_pares++;
            }
        }
    }

    printf("Quantidade de valores inteiros pares no intervalo (%.1f:%.1f): %d\n", a, b, count_pares);
}


void contar_fora_intervalo(float a, float b, int n) {
    int count_fora_intervalo = 0;
    float x;

    printf("Digite os %d valores:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%f", &x);

        float parte_fracionaria = x - (int)x;

        if (parte_fracionaria <= a || parte_fracionaria >= b) {
            count_fora_intervalo++;
        }
    }

    printf("Quantidade de valores com partes fracionárias fora do intervalo (%.2f:%.2f): %d\n", a, b, count_fora_intervalo);
}