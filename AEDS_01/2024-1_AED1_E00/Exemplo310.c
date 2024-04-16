#include <stdio.h>
#include <stdlib.h> 
int main ( )
{

 char X = '0';
 printf ( "EXEMPLO310 - IDENTIFICAR CARACTERES" );
 printf ( "\nFORNECER UM CARACTERE QUALQUER: " );
 scanf ( "%c", &X );
 getchar( ); 
 switch ( X )
 {
 case 'A':
 case 'E':
 case 'I':
 case 'O':
 case 'U': printf ( "FOI DIGITADO UMA VOGAL" );
 break;
 case '0':
 case '1':
 case '2':
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
 case '9': printf ( "FOI DIGITADO UM ALGARISMO" );
 printf ( "\nO NUMERO CORRESPONDENTE = %d", (X-48) );
 break;
 default: printf ( "FOI DIGITADO UM OUTRO CARACTERE QUALQUER" );
 } 
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); 
 return ( EXIT_SUCCESS );
}

/*EXEMPLO310 - IDENTIFICAR CARACTERES
FORNECER UM CARACTERE QUALQUER: A
FOI DIGITADO UMA VOGAL
PRESSIONAR <Enter> PARA TERMINAR.*/