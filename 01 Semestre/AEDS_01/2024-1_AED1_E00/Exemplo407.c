#include <stdio.h> 
#include <stdlib.h> 
int main ( )
{
 int X = 0,
 CONTADOR = 0;
 printf ( "EXEMPLO407 - LER E IMPRIMIR (N) VALORES INTEIROS\n" );
 printf ( "\nFORNECER O NUMERO DE VEZES (N) : " );
 scanf ( "%d", &CONTADOR );
 getchar( ); 
 do // REPETIR
 {
 printf ( "\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
 scanf ( "%d", &X );
 getchar( ); 
 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
 CONTADOR = CONTADOR - 1;
 }
 while ( CONTADOR > 0 ); 
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); 
 return ( EXIT_SUCCESS );
}
/*EXEMPLO407 - LER E IMPRIMIR (N) VALORES INTEIROS

FORNECER O NUMERO DE VEZES (N) : 3

3. FORNECER UM VALOR INTEIRO : 1

O VALOR DIGITADO FOI : 1       

2. FORNECER UM VALOR INTEIRO : 3

O VALOR DIGITADO FOI : 3

1. FORNECER UM VALOR INTEIRO : 6

O VALOR DIGITADO FOI : 6*/