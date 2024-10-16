#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    float notas[n];
    float soma = 0.0;


    for (int i = 0; i < n; i++) {
        scanf("%f", &notas[i]);
    }
    
    float maior = notas[0];
    float menor = notas[0];
    
    for (int i = 0; i < n; i++) {
        soma += notas[i];

        if (notas[i] > maior) {
            maior = notas[i];
        }
        if (notas[i] < menor) {
            menor = notas[i];
        }
    }

    float media = soma / n;

    printf("%.1f %.1f %.1f\n", maior, menor, media);

    return 0;
}
