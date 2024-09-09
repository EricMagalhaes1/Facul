#include <stdio.h> 
#include <stdlib.h> 
void pause ( char message [ ] )
{
 printf ( "\n%s", message );
 fflush ( stdin ); 
 getchar ( ); 
} 
void println ( char text [ ] )
{ printf ( "%s\n", text ); }