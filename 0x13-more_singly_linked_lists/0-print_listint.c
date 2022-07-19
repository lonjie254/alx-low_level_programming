#include "lists.h"
#include <stdio.h>

/**
 *print_listint - print linked list element
 *@h: head of linked list
 *return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t i = 0;
const listint_t *traverse = h;

while (traverse != NULL)
{
printf("%d\n", traverse->n);
i++;
traverse = traverse->next;
}
return (i);
}
