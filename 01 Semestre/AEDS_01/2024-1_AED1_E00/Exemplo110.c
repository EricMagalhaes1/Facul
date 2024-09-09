#include <stdio.h> 
#include <stdlib.h> 
int main ( )
{

 const double PI = 3.14; 

 float X = 10.01;

 int I = 10;

 char N = '\n'; 
 printf ( "EXEMPLO110 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\nMATRICULA: ______ ALUNO : __________________" );
 printf ( "%c%s", N, "EXEMPLOS DE VALORES : " );
 printf ( "%c%s%i" , N, "INTEIRO : " , I );
 printf ( "%c%s%f" , N, "REAL : " , X );
 printf ( "%c%s%lf", N, "REAL : " , PI );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( );
 return ( EXIT_SUCCESS );
} 
/*EXEMPLO110 - PRIMEIRO EXEMPLO EM C
MATRICULA: ______ ALUNO : __________________
EXEMPLOS DE VALORES :
INTEIRO : 10
REAL : 10.010000
REAL : 3.140000
PRESSIONAR <Enter> PARA TERMINAR.*/