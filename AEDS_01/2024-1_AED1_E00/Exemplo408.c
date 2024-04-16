#include <stdio.h> 
#include <stdlib.h> 
int main ( )
{

 int X = 0;
 printf ( "EXEMPLO408 - LER E IMPRIMIR INTEIROS NAO NULOS\n" );
 printf ( "\nFORNECER UM VALOR INTEIRO (0 = PARAR) : " );
 scanf ( "%d", &X );
 getchar( ); 
 while ( X != 0 ) 
 {
 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
 printf ( "\nDIGITE UM VALOR INTEIRO QUALQUER : " );
 scanf ( "%d", &X );
 getchar( ); 
 } 
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); 
 return ( EXIT_SUCCESS );
}
/*EXEMPLO408 - LER E IMPRIMIR INTEIROS NAO NULOS

FORNECER UM VALOR INTEIRO (0 = PARAR) : 1

O VALOR DIGITADO FOI : 1

DIGITE UM VALOR INTEIRO QUALQUER : 5

O VALOR DIGITADO FOI : 5

DIGITE UM VALOR INTEIRO QUALQUER : 0*/