#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
int main ( )
{

 const char SENHA[5] = "XXXX";
 char S [10];
 printf ( "EXEMPLO209 - COMPARAR CARACTERES COM UMA SENHA" );
 printf ( "\nFORNECER UMA CADEIA DE CARACTERES QUALQUER: " );
 scanf ( "%s", S ); 
 getchar( ); 
 printf ( "\nA COMPARACAO COM A SENHA = %d", (strcmp(S,SENHA)==0)?1:0 );

 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); 
 return ( ( EXIT_SUCCESS ) );
}
/*EXEMPLO209 - COMPARAR CARACTERES COM UMA SENHA
FORNECER UMA CADEIA DE CARACTERES QUALQUER: a1b2c3 

A COMPARACAO COM A SENHA = 0
PRESSIONAR <Enter> PARA TERMINAR.*/