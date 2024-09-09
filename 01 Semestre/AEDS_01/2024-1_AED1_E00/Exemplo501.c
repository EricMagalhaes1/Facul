#include <stdio.h> 
#include <stdlib.h> 
void P1 ( void )
{
 printf ( "\n" );
 printf ( "\nCHAMADO O PROCEDIMENTO P1 SEM PARAMETROS" );
 printf ( "\n" );
} 
int main ( void )
{

 printf ( "EXEMPLO0501 - CHAMADA A UM PROCEDIMENTO" );
 P1 ( );
 printf ( "\n" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); 
 return ( EXIT_SUCCESS );
}
/*EXEMPLO0501 - CHAMADA A UM PROCEDIMENTO

CHAMADO O PROCEDIMENTO P1 SEM PARAMETROS


PRESSIONAR <Enter> PARA TERMINAR.*/