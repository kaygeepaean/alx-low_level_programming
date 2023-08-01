#include <stddef.h>
#include "lists.h"

/**
* get_nodeint_at_index - Returns the nth node of a listint_t linked list.
* @head:The head of the linked list.
* @index:The index of the node, starting at 0.
* Return:The node at the given index or NULL if it doesn't exist.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
listint_t *current = head;
while (current != ((void *)0))
{
if (count == index)
return (current);
current = current->next;
count++;
}
return (NULL);
}
