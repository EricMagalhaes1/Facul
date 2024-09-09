#include <stdio.h>
#include <stdlib.h> 
int main ( )
{

 int X=0, Y=0;
 printf ( "EXEMPLO305 - LER E TESTAR DOIS VALORES INTEIROS" );
 printf ( "\nFORNECER UM VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &X );
 getchar( );
 printf ( "\nFORNECER OUTRO VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &Y );
 getchar( ); 
 if( X == Y )
 printf ( "\nDOIS VALORES IGUAIS" );
 else
 {
 printf ( "\n%d", X );
 printf ( " DIFERENTE DE " );
 printf ( "%d", Y );
 }
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); 
 return ( EXIT_SUCCESS );
}

/*EXEMPLO305 - LER E TESTAR DOIS VALORES INTEIROS
FORNECER UM VALOR INTEIRO QUALQUER: 3

FORNECER OUTRO VALOR INTEIRO QUALQUER: 6

3 DIFERENTE DE 6*/