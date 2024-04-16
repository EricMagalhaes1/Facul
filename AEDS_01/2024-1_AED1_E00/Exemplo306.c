#include <stdio.h> 
#include <stdlib.h> 
int main ( )
{

 double X=0.0, Y=0.0;
 printf ( "EXEMPLO306 - LER E TESTAR DOIS VALORES REAIS" );
 printf ( "\nFORNECER UM VALOR REAL QUALQUER: " );
 scanf ( "%lf", &X );
 getchar( ); 
 printf ( "\nFORNECER OUTRO VALOR REAL QUALQUER: " );
 scanf ( "%lf", &Y );
 getchar( );
 if( ! (X == Y) )
 {
 printf ( "\n%lf", X );
 printf ( " DIFERENTE DE " );
 printf ( "%lf", Y );
 }
 else
 {
 printf ( "VALORES IGUAIS" );
 } 
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); 
 return ( EXIT_SUCCESS );
}
/*EXEMPLO306 - LER E TESTAR DOIS VALORES REAIS
FORNECER UM VALOR REAL QUALQUER: 10

FORNECER OUTRO VALOR REAL QUALQUER: 20

10.000000 DIFERENTE DE 20.000000
PRESSIONAR <Enter> PARA TERMINAR.s*/