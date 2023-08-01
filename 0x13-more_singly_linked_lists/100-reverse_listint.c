#include "lists.h"
/**
* reverse_listint - Reverses a linked list.
* @head: The memory allocation of the head pointer of the linked list.
* Return: A pointer to the first node of the reversed list.
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = ((void *)0) ;
listint_t *current = *head;
listint_t *next_node;
while (current != ((void *)0))
{
next_node = current->next;
current->next = prev;
prev = current;
current = next_node;
}
*head = prev;
return (*head);
}
