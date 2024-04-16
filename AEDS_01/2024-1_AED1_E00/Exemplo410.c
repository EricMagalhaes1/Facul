#include <stdio.h>
#include <stdlib.h>
int main ( )
{
 int X = 0;
 printf ( "EXEMPLO410 - LER UM INTEIRO NAO NULO\n" );
 do 
 {
 printf ( "\nFORNECER UM VALOR DIFERENTE DE ZERO : " );
 scanf ( "%d", &X );
 getchar( ); 
 }
 while ( X == 0 );
 printf ( "\nDIGITADO UM NUMERO DIFERENTE DE ZERO\n" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); 
 return ( EXIT_SUCCESS );
}
/*EXEMPLO409 - PARA LER UM INTEIRO NAO NULO

FORNECER UM VALOR DIFERENTE DE ZERO : 2

DIGITADO UM NUMERO DIFERENTE DE ZERO

PRESSIONAR <Enter> PARA TERMINAR.   
PS F:\Faculdade\1 Semestre\AEDS 1\Atividades> cd "f:\Faculdade\1 Semestre\AEDS 1\Atividades\" ; if ($?) { gcc Exemplo410.c -o Exemplo410 } ; if ($?) { .\Exemplo410 }
EXEMPLO410 - LER UM INTEIRO NAO NULO

FORNECER UM VALOR DIFERENTE DE ZERO : 0

FORNECER UM VALOR DIFERENTE DE ZERO : 0

FORNECER UM VALOR DIFERENTE DE ZERO : 3

DIGITADO UM NUMERO DIFERENTE DE ZERO

PRESSIONAR <Enter> PARA TERMINAR.*/