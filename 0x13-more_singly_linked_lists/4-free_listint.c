#include <stdlib.h>
#include "lists.h"
/**
* free_listint - Frees a listint_t list
* @head: The head of linked lists
*/
void free_listint(listint_t *head)
{
listint_t *temp;
while (head != ((void *)0))
{
temp = head;
head = head->next;
free(temp);
}
}
