#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
* insert_nodeint_at_index -Adds a node at a given position in the list.
* @head: The address of the head pointer of the linked list.
* @idx: The index where the new node should be added, starting at 0.
* @n: The value to be saved in the new node.
* Return: The memory allocation of the new node, or NULL if it failed.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *temp;
unsigned int count = 0;
if (head == ((void *)0))
return (NULL);
if (idx == 0)
{
new_node = malloc(sizeof(listint_t));
if (new_node == ((void *)0))
return (NULL);
new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}
temp = *head;
while (temp != ((void *)0))
{
if (count == idx - 1)
{
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = temp->next;
temp->next = new_node;
return (new_node);
}
temp = temp->next;
count++;
}
return (NULL);
}
