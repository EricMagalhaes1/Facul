#include <stdio.h> 
#include <stdlib.h> 
int main ( )
{

 char X = '0';
 printf ( "EXEMPLO308 - LER E TESTAR UMA LETRA" );
 printf ( "\nFORNECER UMA LETRA QUALQUER: " );
 scanf ( "%c", &X );
 getchar( ); 
 if( X >= 'A' && X <= 'Z' )
 printf ( "FOI DIGITADA UMA LETRA MAIUSCULA" );
 else
 if( X >= 'a' && X <= 'z' )
 printf ( "FOI DIGITADA UMA LETRA MINUSCULA" );
 else
 printf ( "NAO FOI DIGITADA UMA LETRA" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar( ); 
 return ( EXIT_SUCCESS );
}
/*EXEMPLO308 - LER E TESTAR UMA LETRA
FORNECER UMA LETRA QUALQUER: C
FOI DIGITADA UMA LETRA MAIUSCULA
PRESSIONAR <Enter> PARA TERMINAR.*/
