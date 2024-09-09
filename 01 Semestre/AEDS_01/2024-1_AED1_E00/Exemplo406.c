#include <stdio.h> 
#include <stdlib.h> 
int main ( )
{
 int X = 0,
 CONTADOR = 0;
 printf ( "EXEMPLO406 - LER E IMPRIMIR 03 VALORES INTEIROS\n" );
 CONTADOR = 1;
 do 
 {
 printf ( "\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
 scanf ( "%d", &X );
 getchar( ); 
 printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
 CONTADOR = CONTADOR + 1;
 }
 while ( CONTADOR <= 3 ); 
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); 
 return ( EXIT_SUCCESS );
} 
/*EXEMPLO406 - LER E IMPRIMIR 03 VALORES INTEIROS

1. FORNECER UM VALOR INTEIRO : 3

O VALOR DIGITADO FOI : 3

2. FORNECER UM VALOR INTEIRO : 5

O VALOR DIGITADO FOI : 5

3. FORNECER UM VALOR INTEIRO : 15

O VALOR DIGITADO FOI : 15

PRESSIONAR <Enter> PARA TERMINAR.*/