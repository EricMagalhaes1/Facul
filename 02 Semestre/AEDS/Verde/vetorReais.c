#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    float vetor[n];
    int qtd_negativos = 0;
    int soma_positivos = 0;

    for (int i = 0; i < n; i++) {
        scanf("%f", &vetor[i]);

        if (vetor[i] < 0) {
            qtd_negativos++;  
        } else if (vetor[i] > 0) {
            soma_positivos += vetor[i]; 
        }
    }

    printf("%d %d\n", qtd_negativos, soma_positivos);

    return 0;
}
