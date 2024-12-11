#include <stdio.h>


int  main(){
  FILE *pF = fopen("C:\\Users\\kir3v\\OneDrive\\Desktop\\poema.txt", "r");
  char buffer[255];

  while(fgets(buffer,255, pF)){
    printf("%s", buffer);
  }


  fclose(pF);

  return 0;
}