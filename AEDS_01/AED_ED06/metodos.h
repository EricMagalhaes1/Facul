#include <stdio.h>
#include <math.h>

void mostraMultiplosSeis(int valor, int contador) {

    if (contador == valor) {
        printf("\n");
        return;
    }
    

    printf("%d ", 6 * (contador + 1));
    mostraMultiplosSeis(valor, contador + 1);
}


void mostrarMultiplosSeisDecrescente(int valor, int contador) {
    if (contador == valor) {
        printf("\n");
        return;
    }

    printf("%d ", 6 * (valor - contador));
    mostrarMultiplosSeisDecrescente(valor, contador + 1);
}

void mostrarFracaoInversaSeis(int valor, int contador) {

    if (contador == valor) {
        printf("\n");
        return;
    }
    

    printf("%d 1/", 6 * (contador + 1));
    mostrarFracaoInversaSeis(valor, contador + 1);
}

void mostraFracaoSeis(int valor, int contador) {

    if (contador == valor) {
        printf("\n");
        return;
    }
    

    printf("%d 1/", 6 * (valor - contador));
    mostraFracaoSeis(valor, contador + 1);
}

void somarSeisADois(int valor, int contador) {

    if (contador == valor) {
        printf("\n");
        return;
    }
    
    int termo = 6;
    for (int i = 1; i <= contador; i++) {
        termo += i * 2;
    }
    printf("%d ", termo);

    somarSeisADois(valor, contador + 1);

}
void somarSeisADoisReverso(int valor, int contador) {
    if (contador == 0) {
        printf("\n");
        return;
    }
    
    int termo = 6;
    for (int i = 1; i < contador; i++) {
        termo += i * 2;
    }
    printf("%d ", termo);

    somarSeisADoisReverso(valor, contador - 1 );
}


void mostrarCaracteres(char *string, int indice) {

    if (string[indice] == '\0') {
        return;
    }

    printf("%c\n", string[indice]);

    mostrarCaracteres(string, indice + 1);
}


int contarDigitosPares(char *cadeia, int indice) {
    // Caso base: se chegarmos ao final da string, retorne 0
    if (cadeia[indice] == '\0') {
        return 0;
    }
    
    // Verifica se o caractere atual é um dígito e se é par
    if (cadeia[indice] >= '0' && cadeia[indice] <= '9' && (cadeia[indice] - '0') % 2 == 0) {
        // Se sim, retorne 1 + a contagem dos dígitos pares restantes na cadeia
        return 1 + contarDigitosPares(cadeia, indice + 1);
    }
    
    // Se não for um dígito par, apenas retorne a contagem dos dígitos pares restantes na cadeia
    return contarDigitosPares(cadeia, indice + 1);
}

int contarLetrasMaiorL(char *cadeia, int indice) {
    // Caso base: se chegarmos ao final da string, retorne 0
    if (cadeia[indice] == '\0') {
        return 0;
    }
    
    // Verifica se o caractere atual é um dígito e se é par
    if (cadeia[indice] >= 'A' && cadeia[indice] <= 'L' ) {
        // Se sim, retorne 1 + a contagem dos dígitos pares restantes na cadeia
        return 1 + contarLetrasMaiorL(cadeia, indice + 1);
    }
    
    // Se não for um dígito par, apenas retorne a contagem dos dígitos pares restantes na cadeia
    return contarLetrasMaiorL(cadeia, indice + 1);
}


int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Função recursiva para calcular o termo par da série de Fibonacci
int termoParFibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 2; // O primeiro termo par é 2 (índice 1)
    } else if (n == 2) {
        return 8; // O segundo termo par é 8 (índice 2)
    }

    // Calcula o termo par atual da série de Fibonacci
    return 4 * termoParFibonacci(n - 1) + termoParFibonacci(n - 2);
}
