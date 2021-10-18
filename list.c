#include <stdio.h>
#include <stdlib.h>


int main(void)
{
int *list = malloc(3 * sizeof(int));

// check for memory
if(list == NULL)
{
    return 1;
}

// assign values to the list by fancy pointer arithmetic
*list = 1;
*(list +1)= 2;
*(list +2) = 3;

// now time passes and we decide to have a bigger array
int *tmp = malloc(4 * sizeof(int));

if(tmp == NULL)
{
    free(list);
    return 1;
}

// copy the values from list over
for(int i = 0; i < 3; i++)
{
    tmp[i] = list[i];
}
tmp[3] = 4;

// don't forget to update list to the address of temp

list = tmp;

for(int i = 0; i < 4; i++)
{
    printf("%i\n", list[i]);
}

// everything works fine 
return 0;
}
