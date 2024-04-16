#include <stdio.h> // para entradas e saídas
#include <stdlib.h> // para outras funcoes de uso geral
int main ( )
{
 const float PI = 3.14; 
 float X = 10.01; 
 printf ( "EXEMPLO108 - PRIMEIRO EXEMPLO EM C" );
 printf ( "\nMATRICULA: ______ ALUNO : __________________" );
 printf ( "\nEXEMPLOS DE VALORES : " );
 printf ( "\nCARACTERE : %c", 'A' ); 
 printf ( "\nINTEIRO : %d", 10 ); 
 printf ( "\nREAL : %f", PI ); 
 printf ( "\nREAL : %f", X ); 
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); 
 return ( EXIT_SUCCESS );
}

/*EXEMPLO108 - PRIMEIRO EXEMPLO EM C
MATRICULA: ______ ALUNO : __________________
EXEMPLOS DE VALORES :
CARACTERE : A
INTEIRO : 10
REAL : 3.140000
REAL : 10.010000
PRESSIONAR <Enter> PARA TERMINAR.*/