#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint - Adds a new node at the beginning of a listint_t list.
* @head: The address of the head pointer of the linked list.
* @n: The value to be saved in the new node.
* Return: The memory location of the new element, or NULL if it failed.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
{
if (new_node == ((void *)0))
return ((void *)0);
new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}
}
