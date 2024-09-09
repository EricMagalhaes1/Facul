#include <stdio.h> 
#include <stdlib.h> 
int main ( )
{
 float X = 0.0;
 printf ( "EXEMPLO302 - LER E TESTAR UM VALOR REAL" );
 printf ( "\nFORNECER UM VALOR REAL DIFERENTE DE ZERO: " );
 scanf ( "%f", &X );
 getchar( );
 if( X != 0.0 )
 printf ( "\nO VALOR DIGITADO FOI DIFERENTE DE ZERO" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); 
 return ( EXIT_SUCCESS );
} 

/*EXEMPLO302 - LER E TESTAR UM VALOR REAL
FORNECER UM VALOR REAL DIFERENTE DE ZERO: 4

O VALOR DIGITADO FOI DIFERENTE DE ZERO*/