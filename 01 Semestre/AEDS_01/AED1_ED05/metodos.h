#include <stdio.h>
#include <math.h>


int lerQuantidade() {
    int n;
    printf("Digite a quantidade inteira: ");
    scanf("%d", &n);
    return n;
}


void mostrarMultiplosDeSeis(int n) {
    printf("{ ");
    for (int i = 1; i <= n; i++) {
        printf("%d", 6 * i);
        if (i < n) printf(", ");
    }
    printf(" }\n");
}


void mostrarMultiplosDeTresECinco(int n) {
    printf("{ ");
    for (int i = 1; i <= n; i++) {
        printf("%d", 15 * i);
        if (i < n) printf(", ");
    }
    printf(" }\n");
}


void mostrarPotenciasDeQuatro(int n) {
    printf("{ ");
    for (int i = 0; i < n; i++) {
        printf("%d", (int)pow(4, n - i));
        if (i < n - 1) printf(", ");
    }
    printf(" }\n");
}


void mostrarDenominadoresMultiplosDeSete(int n) {
    printf("{ ");
    for (int i = 1; i <= n; i++) {
        printf("1/%d", 7 * i);
        if (i < n) printf(", ");
    }
    printf(" }\n");
}

void mostrarValoresParesNosDenominadores(float x, int n) {
    printf("{ ");
    for (int i = 1; i <= n; i++) {
        printf("1/%.0f", i * 2 * x);
        if (i < n) printf(", ");
    }
    printf(" }\n");
}

int calcularSomaMultiplosDeTresNaoMultiplosDeCinco(int n) {
    int soma = 0;
    int valor = 3;
    int count = 0;
    while (count < n) {
        if (valor % 3 == 0 && valor % 5 != 0) {
            soma += valor;
            count++;
        }
        valor++;
    }
    return soma;
}

float calcularSomaInversosMultiplosDeSeisNaoMultiplosDeCinco(int n) {
    float soma = 0.0;
    int valor = 6;
    int count = 0;
    while (count < n) {
        if (valor % 6 == 0 && valor % 5 != 0) {
            soma += 1.0 / valor;
            count++;
        }
        valor++;
    }
    return soma;
}

int calcularSomaAdicaoNaturaisAPartirDeSeis(int n) {
    int soma = 0;
    int valor = 6;
    for (int i = 0; i < n; i++) {
        soma += valor;
        valor++;
    }
    return soma;
}

int calcularSomaQuadradosAdicaoNaturaisAPartirDeSeis(int n) {
    int soma = 0;
    int valor = 6;
    for (int i = 0; i < n; i++) {
        soma += valor * valor;
        valor++;
    }
    return soma;
}

float calcularSomaInversosAdicaoNaturaisAteSeis(int n) {
    float soma = 0.0;
    int valor = 1;
    for (int i = 0; i < n; i++) {
        soma += 1.0 / (valor + 5);
        valor++;
    }
    return soma;
}
