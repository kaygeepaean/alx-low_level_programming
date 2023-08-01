#include <stdlib.h>
#include "lists.h"

/**
*pop_listint - Removes the first node at the beginning of list.
*@head: The address of the head pointer of the linked list.
*Return: The data (n) of the removed head node, or 0 if the list is empty.
*/
int pop_listint(listint_t **head)
{
int data = 0;
listint_t *temp;
if (head != ((void *)0) && *head != ((void *)0))
{
temp = *head;
data = temp->n;
*head = temp->next;
free(temp);
}
return (data);
}
