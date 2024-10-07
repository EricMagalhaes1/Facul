#include <stdio.h>

int main() {
    int idade, gostou, total_pessoas = 0, total_nao_gostaram = 0;
    int total_masculino_gostaram = 0, total_feminino_gostaram = 0;
    int idade_mais_velho_masc_gostou = -1, idade_mais_nova_fem_nao_gostou = -1;
    char genero;

    while (1) {
        scanf("%d", &idade);
        if (idade < 0) {
            break;  
        }
        scanf(" %c %d", &genero, &gostou); 

        total_pessoas++; 
        
        if (gostou == 1) {
            // Se for do gênero masculino
            if (genero == 'M' || genero == 'm') {
                total_masculino_gostaram++;
                if (idade > idade_mais_velho_masc_gostou) {
                    idade_mais_velho_masc_gostou = idade;
                }
            }
            if (genero == 'F' || genero == 'f') {
                total_feminino_gostaram++;
            }
        } else {
            total_nao_gostaram++;
            if (genero == 'F' || genero == 'f') {
                if (idade_mais_nova_fem_nao_gostou == -1 || idade < idade_mais_nova_fem_nao_gostou) {
                    idade_mais_nova_fem_nao_gostou = idade;
                }
            }
        }
    }

    double percentual_nao_gostaram = (double) total_nao_gostaram / total_pessoas * 100;

    printf("Masculino: %d\n", total_masculino_gostaram);
    printf("Feminino: %d\n", total_feminino_gostaram);
    
    if (idade_mais_velho_masc_gostou != -1) {
        printf("%d anos\n", idade_mais_velho_masc_gostou);
    } else {
        printf("Nenhum homem gostou do produto\n");
    }
    
    if (idade_mais_nova_fem_nao_gostou != -1) {
        printf("%d anos\n", idade_mais_nova_fem_nao_gostou);
    } else {
        printf("Nenhuma mulher não gostou do produto\n");
    }
    
    printf("%.2lf%%\n", percentual_nao_gostaram);

    return 0;
}
