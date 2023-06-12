#include <stdio.h>  
#include <string.h>  
  
int str_len( char *st);  
void revstr( char *st);  
int main()  
{  
    char st[50];  
    printf (" Enter a string to be reversed: ");  
    // scanf( "%s", st);  
    gets(st);
      
    revstr(st);   
      
    printf (" The reverse string is: %s", st);  
    return 0;  
}  
void revstr (char *st)  
{  
    int len, i;  
    char *start, *end, temp;  
      
    len = str_len (st);  
    for (i = 0; i < len/2; i++) 
    {
        temp = st[i];
        st[i]= st[len-1-i];
        st[len-1-i] = temp;
    }
}  
int str_len (char *ptr)  
{  
    int i = 0;  
    while ( *(ptr + i) != '\0')  
    i++;  
    return i;  
}  
