#include <stdio.h>
#include <stdlib.h> 
int main ( )
{

 char X = '0';
 printf ( "EXEMPLO303 - LER E TESTAR UM CARACTERE" );
 printf ( "\nFORNECER UM ALGARISMO QUALQUER: " );
 scanf ( "%c", &X );
 getchar( ); 
 if( X >= '0' && X <= '9' )
 {
 printf ( "\nO VALOR DIGITADO FOI UM ALGARISMO" );
 printf ( "\nO ALGARISMO DIGITADO FOI: %c", X );
 }
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); 
 return ( EXIT_SUCCESS );
}
/*EXEMPLO303 - LER E TESTAR UM CARACTERE
FORNECER UM ALGARISMO QUALQUER: 6

O VALOR DIGITADO FOI UM ALGARISMO
O ALGARISMO DIGITADO FOI: 6*/
