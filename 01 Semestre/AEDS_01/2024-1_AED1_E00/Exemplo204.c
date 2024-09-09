#include <stdio.h> 
#include <stdlib.h> 
int main ( )
{
 char X [10];
 printf ( "EXEMPLO204 - LER E IMPRIMIR, NO MAXIMO, 09 CARACTERES" );
 printf ( "\nDIGITE, NO MAXIMO, 09 CARACTERES QUAISQUER: " );
 scanf ( "%s", X ); 
 getchar( ); 
 printf ( "\nFOI DIGITADO: %s", X );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); 
 return ( EXIT_SUCCESS );
}
/*EXEMPLO204 - LER E IMPRIMIR, NO MAXIMO, 09 CARACTERES
DIGITE, NO MAXIMO, 09 CARACTERES QUAISQUER: 1234abcd

FOI DIGITADO: 1234abcd
PRESSIONAR <Enter> PARA TERMINAR*/