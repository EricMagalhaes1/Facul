#include <stdio.h> 
#include <stdlib.h> 
int main ( )
{

 char X = '0';
 printf ( "EXEMPLO309 - COMPARAR CARACTERES < , = , >" );
 printf ( "\nFORNECER UM DOS CARACTERES CITADOS: " );
 scanf ( "%c", &X );
 getchar( ); 
 switch( X )
 {
 case '>': printf ( "FOI DIGITADO O SINAL DE MAIOR" );
 break;
 case '=': printf ( "FOI DIGITADO O SINAL DE IGUAL" );
 break;
 case '<': printf ( "FOI DIGITADO O SINAL DE MENOR" );
 break;
 default : printf ( "FOI DIGITADO UM OUTRO CARACTERE QUALQUER" );
 }
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); 
 return ( EXIT_SUCCESS );
}

/*EXEMPLO309 - COMPARAR CARACTERES < , = , >
FORNECER UM DOS CARACTERES CITADOS: >
FOI DIGITADO O SINAL DE MAIOR    
PRESSIONAR <Enter> PARA TERMINAR.*/