#include <stddef.h>
#include "lists.h"

/**
* listint_len - Returns the number of elements in a listint_t list.
* @h: The head of the linked list.
* Return: The number of nodes.
*/
size_t listint_len(const listint_t *h)
{
size_t count = 0;
while (h != ((void *)0))
{
count++;
h = h->next;
}
return (count);
}
