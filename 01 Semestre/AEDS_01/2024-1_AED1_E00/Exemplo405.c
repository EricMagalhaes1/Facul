#include <stdio.h> 
#include <stdlib.h> 
int main ( )
{

 int X = 0,
 N = 0,
 CONTADOR = 0;
 printf ( "EXEMPLO405 - LER E IMPRIMIR (N) VALORES INTEIROS\n" );
 printf ( "\nFORNECER O NUMERO DE VEZES (N) : " );
 scanf ( "%d", &N );
 getchar( );
 for ( CONTADOR = 1; CONTADOR <= N; CONTADOR++ )
 {
 printf ( "\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
 scanf ( "%d", &X );
 getchar( );
 printf ( "\nO VALOR DIGITADO FOI : %d", X );
 } 
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( );
 return ( EXIT_SUCCESS );
}
/*EXEMPLO405 - LER E IMPRIMIR (N) VALORES INTEIROS

FORNECER O NUMERO DE VEZES (N) : 1

1. FORNECER UM VALOR INTEIRO : 20

O VALOR DIGITADO FOI : 20
PRESSIONAR <Enter> PARA TERMINAR*/