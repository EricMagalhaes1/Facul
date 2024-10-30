#include <stdio.h>

int main() {
    int ddd;

    scanf("%d", &ddd);

    switch (ddd) {
    case 11:
        printf("11 - Brasilia\n");
    break;

    case 19:
        printf("19 - Campinas\n");
    break;

    case 21:
        printf("21 - Rio de Janeiro\n");
    break;

    case 27:
        printf("27 - Vitoria\n");
    break;

    case 31:
        printf("31 - Belo Horizonte\n");
    break;

    case 35:
        printf("35 - Lavras\n");
    break;

    case 71:
        printf("71 - Salvador\n");
    break;

    default:
        printf("DDD nao cadastrado\n");
        break;
    }

    return 0;
}
