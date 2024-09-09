#include <stdio.h>
#include <stdlib.h>
int X = 0;
void P1 ( void )
{
printf ( "\n" );
printf ( "\nCHAMADO O PROCEDIMENTO P1 %d VEZ(ES)", X );
printf ( "\n" );
} // fim procedimento P1( )
int main ( void )
{

 printf ( "EXEMPLO0502 - CHAMADA COM VARIAVEL GLOBAL\n" );
 for ( X = 1; X <= 5; X = X + 1 )
 P1 ( );
 printf ( "\n" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); 
 return ( EXIT_SUCCESS );
}
/*EXEMPLO0502 - CHAMADA COM VARIAVEL GLOBAL


CHAMADO O PROCEDIMENTO P1 1 VEZ(ES)


CHAMADO O PROCEDIMENTO P1 2 VEZ(ES)


CHAMADO O PROCEDIMENTO P1 3 VEZ(ES)


CHAMADO O PROCEDIMENTO P1 4 VEZ(ES)


CHAMADO O PROCEDIMENTO P1 5 VEZ(ES)


PRESSIONAR <Enter> PARA TERMINAR. */