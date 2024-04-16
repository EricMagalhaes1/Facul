#include <stdio.h> 
#include <stdlib.h> 
int main ( )
{
 int X = 0;
 printf ( "EXEMPLO201 - LER E IMPRIMIR UM VALOR INTEIRO" );
 printf ( "\nFORNECER UM VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &X );
 getchar( );
 printf ( "\nO VALOR DIGITADO FOI: %d", X );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); 
 return ( EXIT_SUCCESS );
}
/*EXEMPLO201 - LER E IMPRIMIR UM VALOR INTEIRO
FORNECER UM VALOR INTEIRO QUALQUER: 10

O VALOR DIGITADO FOI: 10
PRESSIONAR <Enter> PARA TERMINAR.*/