#include <stdio.h>
#include "lists.h"

/**
*print_list - prints Eachh element of a list_t list.
*@h: The head of the link list
*Return: The number of nodes.
*/
size_t print_list(const list_t *h)
{
size_t node_count = 0;

while (h != ((void *)0))
{
if (h->str == ((void *)0))
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
node_count++;
}
return (node_count);
}
