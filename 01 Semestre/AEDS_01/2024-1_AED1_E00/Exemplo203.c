#include <stdio.h> 
#include <stdlib.h> 
int main ( )
{
 char X = '0';
 printf ( "EXEMPLO203 - LER E IMPRIMIR UM CARACTERE" );
 printf ( "\nFORNECER UM CARACTERE QUALQUER: " );
 scanf ( "%c", &X );
 getchar( ); 
 printf ( "\nO VALOR DIGITADO FOI: %c", X );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); 
 return ( EXIT_SUCCESS );
} 
/*EXEMPLO203 - LER E IMPRIMIR UM CARACTERE
FORNECER UM CARACTERE QUALQUER: c

O VALOR DIGITADO FOI: c*/