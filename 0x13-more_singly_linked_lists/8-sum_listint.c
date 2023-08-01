#include <stddef.h>
#include "lists.h"

/**
* sum_listint - Returns the sum of all the data of a list.
* @head: The head of the linked list.
* Return:Total sum of data or 0 if empty.
*/
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *current = head;
while (current != ((void *)0))
{
sum += current->n;
current = current->next;
}
return (sum);
}
