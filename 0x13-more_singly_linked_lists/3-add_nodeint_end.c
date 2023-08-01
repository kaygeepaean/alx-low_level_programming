#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint_end - Adds a new node at the end of a listint_t list.
* @head: The address of the head pointer of the linked list.
* @n: The value to be saved in the new node.
* Return: The memory allocation of the new element, or NULL if it failed.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
listint_t *temp;
if (new_node == ((void *)0))
return (NULL);
new_node->n = n;
new_node->next = ((void *)0);
if (*head == ((void *)0))
{
*head = new_node;
}
else
{
temp = *head;
while (temp->next != ((void *)0))
{
temp = temp->next;
}
temp->next = new_node;
}
return (new_node);
}
