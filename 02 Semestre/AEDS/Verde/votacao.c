#include <stdio.h>

int main() {
    int voto;
    int votos_candidato1 = 0, votos_candidato2 = 0, votos_candidato3 = 0, votos_candidato4 = 0;
    int votos_nulos = 0, votos_brancos = 0, total_votos = 0;

    while (1) {
        scanf("%d", &voto);

        if (voto == 0) {
            break;
        }

        switch (voto) {
            case 1:
                votos_candidato1++;
                break;
            case 2:
                votos_candidato2++;
                break;
            case 3:
                votos_candidato3++;
                break;
            case 4:
                votos_candidato4++;
                break;
            case 5:
                votos_nulos++;
                break;
            case 6:
                votos_brancos++;
                break;
            default:
                printf("Voto inválido!\n");
                break;
        }

        if (voto >= 1 && voto <= 6) {
            total_votos++;
        }
    }

    double porcentagem_brancos = 0;
    if (total_votos > 0) {
        porcentagem_brancos = (double)votos_brancos / total_votos * 100;
    }

    printf("Candidato 1: %d voto(s)\n", votos_candidato1);
    printf("Candidato 2: %d voto(s)\n", votos_candidato2);
    printf("Candidato 3: %d voto(s)\n", votos_candidato3);
    printf("Candidato 4: %d voto(s)\n", votos_candidato4);
    printf("Votos nulos: %d\n", votos_nulos);
    printf("Porcentagem de votos em branco: %.2lf%%\n", porcentagem_brancos);

    return 0;
}
