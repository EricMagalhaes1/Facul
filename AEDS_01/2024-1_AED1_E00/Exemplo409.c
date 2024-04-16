#include <stdio.h> 
#include <stdlib.h> 
int main ( )
{

 int X = 0;
 printf ( "EXEMPLO409 - PARA LER UM INTEIRO NAO NULO\n" );
 printf ( "\nFORNECER UM VALOR DIFERENTE DE ZERO : " );
 scanf ( "%d", &X );
 getchar( ); 
 while ( X == 0 ) 
 {
 printf ( "\nFORNECER UM VALOR DIFERENTE DE ZERO : " );
 scanf ( "%d", &X );
 getchar( ); 
 } 
 printf ( "\nDIGITADO UM NUMERO DIFERENTE DE ZERO\n" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); 
 return ( EXIT_SUCCESS );
}
/*EXEMPLO409 - PARA LER UM INTEIRO NAO NULO

FORNECER UM VALOR DIFERENTE DE ZERO : 2

DIGITADO UM NUMERO DIFERENTE DE ZERO

PRESSIONAR <Enter> PARA TERMINAR.   */