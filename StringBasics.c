#include <stdio.h>
// Compile and run the code with and without string .h
#include <string.h>

int main () 
{
    char c = 'R';
    char s [] = "Rafat";
    char s2 [] = "TheKabir";

    printf ("Character : %c\n", c);
    printf ("String : %s\n", s);
    printf ("s[0]: %c\n", s[0]);
    printf ("s[5]: %c\n", s[4]);
    printf ("Size of s in bits: %zu\n", 8*sizeof(s));
    printf ("s[6] (null character): %d\n", s[5]);

    char s3 [20]; // Make sure s3 has enough space to hold the concatenated string
    
    strcpy ( s3 , s ) ; // Copy the content of s to s3
    strcat ( s3 , s2 ) ; // Concatenate s2 to s3
  
    printf ("s3: %s\n", s3 ) ;
  
    return 0;
}