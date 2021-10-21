#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    int number;
    struct node *next;
}
node;

int main(void)
{
    // list of size 
    node *list = NULL;

    // Add a number to list
    node *n = malloc(sizeof(node));
    if(n == NULL)
    {
        return 1;
    }
    n->number = 1;
    n->next = NULL;

    // Update list to point new node
    list = n;

    // Add a number to list
    n = malloc(sizeof(node));
    if(n == NULL)
    {
        free(list);
        return 1;
    }
    n->number = 2;
    n->next = NULL;
    list->next = n;

    // Add a number to list
    n = malloc(sizeof(node));
    if(n == NULL)
    {
        // Reverse order necessary here
        free(list->next);
        free(list);
        return 1;
    }
    n->number = 3;
    n->next = NULL;
    list->next->next = n;

    // Print numbers
    // you can not use square bracket and pointer offset here
    // you have to follow the arrows
    for (node *temp = list; temp != NULL; temp = temp->next)
    {
        printf("%i\n", temp->number);
    }

    // Free list
    while(list != NULL)
    {
        node *tmp = list->next;
        free(list);
        list = tmp;
    }
    return 0;
    // Running Time of linked list always O(n)
}
