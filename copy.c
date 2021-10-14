#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// doing copy right 
// using the assignment will not work
// t = s would just copy the address of
// the first character of the string
int main(void)
{
    // 6 because of the zero character
    char s[6] = "hallo";
    char *t = malloc(strlen(s) + 1);
    
    // old school for-loop style
    for(int i = 0; i < strlen(s)+1; i++)
    {
        t[i] = s[i];
    }

    // new style would be using strcpy
    // strcpy(t,s)

    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    printf("t: %s\n", t);
}


