#include <stdlib.h>
#include "lists.h"

/**
* free_list - Frees a list_t list.
* @head: The head of the linked list to be freed.
*
* Description: Function to free the entire linked list and its strings
*/
void free_list(list_t *head)
{
list_t *current, *next_node;
current = head;
while (current != NULL)
{
next_node = current->next;
free(current->str);
free(current);
current = next_node;
}
}
