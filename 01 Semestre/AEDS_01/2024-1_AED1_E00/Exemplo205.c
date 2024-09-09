#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int main ( )
{
 int X=0, Y=0, Z=0;
 printf ( "EXEMPLO205 - LER E SOMAR DOIS VALORES INTEIROS" );
 printf ( "\nFORNECER UM VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &X );
 getchar( ); 
 printf ( "\nFORNECER OUTRO VALOR INTEIRO QUALQUER: " );
 scanf ( "%d", &Y );
 getchar( );
 Z = X + Y;
 printf ( "\nA SOMA DOS DOIS = %d", Z );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); 
 return ( EXIT_SUCCESS );
} 
/*EXEMPLO205 - LER E SOMAR DOIS VALORES INTEIROS
FORNECER UM VALOR INTEIRO QUALQUER: 5

FORNECER OUTRO VALOR INTEIRO QUALQUER: 8

A SOMA DOS DOIS = 13
PRESSIONAR <Enter> PARA TERMINAR.*/