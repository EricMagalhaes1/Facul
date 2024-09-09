#include <stdio.h>
#include <stdlib.h> 
int main ( )
{
 int X = 0;
 printf ( "EXEMPLO301 - LER E TESTAR UM VALOR INTEIRO" );
 printf ( "\nFORNECER UM VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &X );
 getchar( ); 
 if ( X == 0 )
 printf ( "\nO VALOR DIGITADO FOI ZERO" );
 else
 printf ( "\nO VALOR DIGITADO NAO FOI ZERO" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); 
 return ( EXIT_SUCCESS );
}
/*EXEMPLO301 - LER E TESTAR UM VALOR INTEIRO
FORNECER UM VALOR INTEIRO QUALQUER: 2

O VALOR DIGITADO NAO FOI ZERO
PRESSIONAR <Enter> PARA TERMINAR.*/