#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
int main ( )
{
 const double PI = 3.14;
 double ARCO = 0.0,
 COSSENO = 0.0,
 SENO = 0.0,
 TANGENTE = 0.0;
 printf ( "EXEMPLO210 - CALCULAR O ARCO TRIGONOMETRICO DE UM SENO" );
 printf ( "\nFORNECER O VALOR DO SENO: " );
 scanf ( "%lf", &SENO );
 getchar( ); 
 COSSENO = sqrt( 1.0 - pow(SENO,2) );
 TANGENTE = SENO / COSSENO;
 ARCO = atan( TANGENTE );
 printf ( "\nO ARCO TRIGONOMETRICO EM GRAUS = %lf", (ARCO*180.0/PI) );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( );
 return ( EXIT_SUCCESS );
}
/*EXEMPLO210 - CALCULAR O ARCO TRIGONOMETRICO DE UM SENO
FORNECER O VALOR DO SENO: 0
O ARCO TRIGONOMETRICO EM GRAUS = 0.000000
PRESSIONAR <Enter> PARA TERMINAR.*/