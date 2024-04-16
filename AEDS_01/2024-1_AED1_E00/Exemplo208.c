#include <stdio.h> 
#include <stdlib.h> 
int main ( )
{

 double D = 0.0, 
 T = 0.0,
 V = 0.0; 
 printf ( "EXEMPLO208 - CALCULAR A VELOCIDADE DE UM VEICULO" );
 printf ( "\nFORNECER UMA DISTANCIA QUALQUER EM METROS: " );
 scanf ( "%lf", &D );
 getchar( ); 
 printf ( "\nFORNECER O TEMPO PARA PERCORRE-LA EM SEGUNDOS: " );
 scanf ( "%lf", &T );
 getchar( ); 
 V = D / T;
 printf ( "\nV = D / T = %lf%s", V, " m/s " );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); 
 return ( EXIT_SUCCESS );
}
/*EXEMPLO208 - CALCULAR A VELOCIDADE DE UM VEICULO
FORNECER UMA DISTANCIA QUALQUER EM METROS: 50

FORNECER O TEMPO PARA PERCORRE-LA EM SEGUNDOS: 2

V = D / T = 25.000000 m/s
PRESSIONAR <Enter> PARA TERMINAR.*/