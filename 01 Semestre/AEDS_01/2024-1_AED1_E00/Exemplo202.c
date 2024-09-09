#include <stdio.h> 
#include <stdlib.h> 
int main ( )
{
 double X = 0.0;
 printf ( "EXEMPLO202 - LER E IMPRIMIR UM VALOR REAL" );
 printf ( "\nFORNECER UM VALOR REAL QUALQUER: " );
 scanf ( "%lf", &X );
 getchar( ); 
 printf ( "\nO VALOR DIGITADO FOI: %lf", X );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); 
 return ( EXIT_SUCCESS );
}
/*EXEMPLO202 - LER E IMPRIMIR UM VALOR REAL
FORNECER UM VALOR REAL QUALQUER: 5

O VALOR DIGITADO FOI: 5.000000*/