#include <stdio.h> 
#include <stdlib.h> 
int main ( )
{

 char X = '0';
 printf ( "EXEMPLO304 - LER E TESTAR CARACTERE" );
 printf ( "\nFORNECER UM CARACTERE QUALQUER: " );
 scanf ( "%c", &X );
 getchar( );
 if( !( X >= '0' && X <= '9') )
 {
 printf ( "\nNAO FOI DIGITADO UM ALGARISMO" );
 printf ( "\nFOI DIGITADO O CARACTERE: %c", X );
 } 
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); 
 return ( EXIT_SUCCESS );
}

/*EXEMPLO304 - LER E TESTAR CARACTERE
FORNECER UM CARACTERE QUALQUER: b

NAO FOI DIGITADO UM ALGARISMO
FOI DIGITADO O CARACTERE: b*/