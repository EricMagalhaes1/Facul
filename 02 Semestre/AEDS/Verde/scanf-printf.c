#include <stdio.h>

void Octal(int num) {
    if (num == 0) {
        printf("0");
        return;
    }

    int resto;
    char octal[100];
    int i = 0;

    while (num != 0) {
        resto = num % 8;
        octal[i] = resto + '0';
        num = num / 8;
        i++;
    }

    printf("Octal: ");

    for (int j = i - 1; j >= 0; j--) {
        printf("%c", octal[j]);
    }
    printf("\n");
}

void Hexadecimal(int num) {
    if (num == 0) {
        printf("0");
        return;
    }

    int resto;
    char hexadecimal[100];
    int i = 0;

    while (num != 0) {
        resto = num % 16;

        if (resto < 10) {
            hexadecimal[i] = resto + '0';
        } else {
            hexadecimal[i] = resto - 10 + 'a';
        }

        num = num / 16;
        i++;
    }

    printf("Hexadecimal: ");

    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexadecimal[j]);
    }
    printf("\n");
}


int main(){

    int Int;
    float Float;

    scanf("%d %f" , &Int, &Float);

    printf("Decimal: %05d\n", Int);

    Hexadecimal(Int);

    Octal(Int);

    printf("Char: %c\n", Int);

    printf("Com 6 casas decimais: %.6f\n", Float);

    printf("Com 2 casas decimais: %.2f\n", Float);

    printf("Notação científica (lower): %e\n", Float);
    printf("Notação científica (upper): %E\n", Float);

    return 0;
}