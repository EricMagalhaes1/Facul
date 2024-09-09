#include <stdio.h>

int main(){
  int segundos;
  int minutos = 0;
  int horas = 0;

  scanf("%d",&segundos);

  while(segundos >= 60){
  segundos = segundos - 60;
  minutos += 1;}

  while(minutos >= 60){
  minutos = minutos - 60;
  horas += 1;
 }

 printf("%02d:%02d:%02d",horas, minutos,segundos);

}