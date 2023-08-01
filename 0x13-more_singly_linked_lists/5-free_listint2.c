#include <stdlib.h>
#include "lists.h"

/**
* free_listint2 - Frees a listint_t list and sets the head to NULL.
* @head: The memory allocation of the head pointer of the linked list.
*/
void free_listint2(listint_t **head)
{
listint_t *current;
listint_t *next_node;
if (head == ((void *)0))
return;
current = *head;
while (current != ((void *)0))
{
next_node = current->next;
free(current);
current = next_node;
}
*head = NULL; /*Set the head pointer to NULL*/
}
