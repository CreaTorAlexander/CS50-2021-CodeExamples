#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char s[4] = {'h','i','!','\0'};
    char t[4] = {'h','i','!', '\0'};
    
    // print the actual address
    printf("%p\n", s);
    printf("%p\n", t);

    // note strcmp returns 0 at equality
    if (strcmp(s,t) == 0)
    {
        printf("Same\n");
    }
    else {
        printf("Different\n");
    }
}