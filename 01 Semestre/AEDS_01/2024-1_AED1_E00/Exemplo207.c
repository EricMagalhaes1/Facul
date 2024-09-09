#include <stdio.h> 
#include <stdlib.h> 
#include <stdbool.h> 
int main ( )
{

 bool X=false, Y=false, Z=false;
 printf ( "EXEMPLO207 - OPERAR VALORES LOGICOS" );
 X = true;
 Y = false;
 Z = X || Y; 
 printf ( "\nA DISJUNCAO ENTRE VERDADEIRO E FALSO = %d", Z );
 Z = X && Y; 
 printf ( "\nA CONJUNCAO ENTRE VERDADEIRO E FALSO = %d", Z );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( );
 return ( EXIT_SUCCESS );
}
/*EXEMPLO207 - OPERAR VALORES LOGICOS
A DISJUNCAO ENTRE VERDADEIRO E FALSO = 1
A CONJUNCAO ENTRE VERDADEIRO E FALSO = 0
PRESSIONAR <Enter> PARA TERMINAR. */