#include <stdlib.h>
#include "lists.h"

/**
* list_len - Counts the number of each element in a linked list.
* @h: The head of the linked list.
* Return: The number of nodes in the list.
*/
size_t list_len(const list_t *h)
{
size_t node_count = 0;

while (h != ((void *)0))
{
h = h->next;
node_count++;
}
return (node_count);
}
