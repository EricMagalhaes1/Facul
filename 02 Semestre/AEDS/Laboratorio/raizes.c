#include <stdio.h>
#include <math.h>

int raizes(float a, float b, float c, float * x1, float * x2){

  float delta = pow(b,2)-(4*a*c);
  printf("Delta = %f\n", delta);

  if(delta < 0){
    return 0;
  }
  else if(delta == 0){
    *x1 = (-b + sqrt(delta))/2*a;
    *x2 = *x1;
    return 1;
  }
  else{
    *x1 = (-b + sqrt(delta))/2*a;
    *x2 = (-b - sqrt(delta))/2*a;
    return 2;
  }

}

int main(){

  float a,b,c;

  float x1;
  float x2;
  float *px1 = &x1;
  float *px2 = &x2;

  scanf("%f %f %f", &a, &b, &c);

  float resultado = raizes(a,b,c,px1,px2);

  if(resultado == 0){
    printf("Equacao sem raiz");
  }
  else if(resultado == 1){
    printf("X = %f\n", x1);

  }
  else if(resultado == 2){
    printf("X1 = %f\n", x1);
    printf("X2 = %f\n",x2);
  }

  return 0;
}