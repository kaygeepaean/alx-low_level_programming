#include <stdio.h>
#include "lists.h"

/**
* print_listint - Prints the values of every elements in a listint_t list.
* @h: The head of the linked list.
* Return: The number of nodes.
*/
size_t print_listint(const listint_t *h)
{
size_t node_count = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
node_count++;
}
return (node_count);
}
