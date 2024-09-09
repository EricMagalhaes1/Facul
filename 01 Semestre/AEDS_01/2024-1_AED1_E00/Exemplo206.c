#include <stdio.h>
#include <stdlib.h> 
int main ( )
{

 float X=0.0, Y=0.0, Z=0.0;
 printf ( "EXEMPLO206 - LER E SUBTRAIR DOIS VALORES REAIS" );
 printf ( "\nFORNECER UM VALOR REAL QUALQUER: " );
 scanf ( "%f", &X );
 getchar( ); 
 printf ( "\nFORNECER OUTRO VALOR REAL QUALQUER: " );
 scanf ( "%f", &Y );
 getchar( ); 
 Z = X - Y;
 printf ( "\nA DIFERENCA ENTRE OS DOIS = %f", Z );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); 
 return ( EXIT_SUCCESS );
}
/*EXEMPLO206 - LER E SUBTRAIR DOIS VALORES REAIS
FORNECER UM VALOR REAL QUALQUER: -4

FORNECER OUTRO VALOR REAL QUALQUER: 7

A DIFERENCA ENTRE OS DOIS = -11.000000
PRESSIONAR <Enter> PARA TERMINAR.*/