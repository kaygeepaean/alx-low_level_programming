#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
* delete_nodeint_at_index - remove the node at a specific index in list.
* @head: The address of the head pointer of the linked list.
* @index: The index of the node to be removed, starting at 0.
* Return: 1 if (success), -1 if it failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *temp;
unsigned int count = 0;
if (head == ((void *)0) || *head == ((void *)0))
return (-1);
if (index == 0)
{
temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}
current = *head;
while (current != ((void *)0))
{
if (count == index - 1)
{
temp = current->next;
if (temp == ((void *)0))
return (-1);
current->next = temp->next;
free(temp);
return (1);
}
current = current->next;
count++;
}
return (-1);
}
