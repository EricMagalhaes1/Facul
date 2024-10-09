#include <stdio.h>

void inverteNumero(int n) {
    if (n == 0) {
        return;
    }

    printf("%d", n % 10);
    inverteNumero(n / 10);
}
int main() {
    int num;
    
    scanf("%d", &num);
    if (num < 0) {
        printf("-");
        num = -num;
    }

    inverteNumero(num);

    printf("\n"); 

    return 0;
}
