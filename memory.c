#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x = malloc(3 * sizeof(int));
    x[0] = 72;
    x[1] = 73;
    x[2] = 33;
    free(x);


    // garbage values
    // when you don't initialise then 
    // the computer will put values there
    int scores[3];
    for(int i = 0;i < 3; i++)
    {
        printf("%i\n", scores[i]);
        // prints out
        // 0
        // -485591168
        // 32766
    }
}