#include <stdio.h>

int main () {

    int vitorias = 0;
    int jogos = 0;
    char resultado;

    while (jogos < 6) {
        scanf(" %c", &resultado); 
        if (resultado == 'V') {   
            vitorias++;
        }
        jogos++;
    }

    switch (vitorias) {
        case 1:
        case 2:
            printf("3");
            break;

        case 3:
        case 4:
            printf("2");
            break;

        case 5:
        case 6:
            printf("1");
            break;

        case 0:
            printf("-1");
            break;
    }

    return 0;
}
