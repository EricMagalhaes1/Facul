#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main ( )
{
 int X=0, Y=0;
 bool Z=false;
 printf ( "EXEMPLO307 - TRATAR VALORES LOGICOS" );
 printf ( "\nFORNECER UM VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &X );
 getchar( ); 
 printf ( "\nFORNECER OUTRO VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &Y );
 getchar( ); 
 Z = (X == Y);
 if( Z )
 printf ( "VALORES IGUAIS" );
 else
 printf ( "VALORES DIFERENTES" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); 
 return ( EXIT_SUCCESS );
}
/*EXEMPLO307 - TRATAR VALORES LOGICOS
FORNECER UM VALOR INTEIRO QUALQUER: 10

FORNECER OUTRO VALOR INTEIRO QUALQUER: 5
VALORES DIFERENTES*/