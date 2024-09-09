#include <stdio.h>
#include <stdlib.h>
int main ( )
{
 int X = 0,
 CONTADOR = 0;
 printf ( "EXEMPLO404 - LER E IMPRIMIR 03 VALORES INTEIROS\n" );
 for ( CONTADOR = 1; CONTADOR <= 3; CONTADOR = CONTADOR+1)
 {
 printf ( "\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
 scanf ( "%d", &X );
 getchar( ); 
 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
 } 
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); 
 return ( EXIT_SUCCESS );
}
/*EXEMPLO404 - LER E IMPRIMIR 03 VALORES INTEIROS

1. FORNECER UM VALOR INTEIRO : 3

O VALOR DIGITADO FOI : 3

2. FORNECER UM VALOR INTEIRO : 4

O VALOR DIGITADO FOI : 4

3. FORNECER UM VALOR INTEIRO : 1

O VALOR DIGITADO FOI : 1

PRESSIONAR <Enter> PARA TERMINAR.*/