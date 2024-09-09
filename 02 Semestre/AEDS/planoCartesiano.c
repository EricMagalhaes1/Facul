#include <stdio.h>

int main() {
    int x, y;

    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0) {
        printf("primeiro\n"); 
    } else if (x < 0 && y > 0) {
        printf("segundo\n"); 
    } else if (x < 0 && y < 0) {
        printf("terceiro\n"); 
    } else if (x > 0 && y < 0) {
        printf("quarto\n");   
    } else if (x == 0 && y == 0) {
        printf("origem\n");    
    } else if (x == 0) {
        printf("eixo Y\n");    
    } else if (y == 0) {
        printf("eixo X\n");    
    }

    return 0;
}
