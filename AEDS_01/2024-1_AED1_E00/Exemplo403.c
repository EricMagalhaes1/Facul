#include <stdio.h>
#include <stdlib.h>
int main ( )
{

 int X = 0, N = 0;
 printf ( "EXEMPLO403 - LER E IMPRIMIR (N) VALORES INTEIROS\n" );
 printf ( "\nFORNECER O NUMERO DE VEZES (N) : " );
 scanf ( "%d", &N );
 getchar( ); 
 while ( N > 0 ) 
 {
 printf ( "\n%d", N );
 printf ( " FORNECER UM VALOR INTEIRO QUALQUER : " );
 scanf ( "%d", &X );
 getchar( ); 
 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
 N = N - 1;
 } 
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); 
 return ( EXIT_SUCCESS );
} 
/*EXEMPLO403 - LER E IMPRIMIR (N) VALORES INTEIROS

FORNECER O NUMERO DE VEZES (N) : 2

2 FORNECER UM VALOR INTEIRO QUALQUER : 3

O VALOR DIGITADO FOI : 3

1 FORNECER UM VALOR INTEIRO QUALQUER : 4

O VALOR DIGITADO FOI : 4

PRESSIONAR <Enter> PARA TERMINAR.*/