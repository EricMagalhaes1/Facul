#include <stdio.h>
#include <stdlib.h>
int main ( )
{

 const float PI = 3.14; 

 float X = 10.01;

 int I = 10;
 printf ( "EXEMPLO109 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\nMATRICULA: ______ ALUNO : __________________" );
 printf ( "\nEXEMPLOS DE VALORES : " );
 printf ( "\nINTEIRO : %i" , I );
 printf ( "\nREAL : %f" , X );
 printf ( "\nREAL : %f" , PI );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); 
 return ( EXIT_SUCCESS );
} 

/*EXEMPLO109 - PRIMEIRO EXEMPLO EM C
MATRICULA: ______ ALUNO : __________________
EXEMPLOS DE VALORES : 
INTEIRO : 10
REAL : 10.010000
REAL : 3.140000
PRESSIONAR <Enter> PARA TERMINAR.*/