#include <stdio.h>

int main() {
    int n1, n2, soma, i;

    scanf("%d %d", &n1, &n2);

    if (n1 > n2) {
        for (i = n2; i <= n1; i++) {
            soma += i;
            printf("%d ", i);
        }
    } else {
        for (i = n1; i <= n2; i++) {
            soma += i;
            printf("%d ", i);
        }
    }

    printf("Soma = %d", soma);

    return 0;
}
