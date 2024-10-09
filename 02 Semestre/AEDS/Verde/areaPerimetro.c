#include <stdio.h>


int main(){

float pi = 3.14159;
float raio;

scanf("%f", &raio);

float area = pi * (raio*raio);

float perimetro = 2.0 * pi * raio;

printf("%.2f %.2f", area, perimetro);
}
