#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/** 
* add_node_end - adds a new node at the end of a linked list
*@head: The address of the head pointer of the linked list.
*@str: The string that will be saved in the new node.
*Return: The Memory allocation node, or NULL if the operation fails.
*Description: This function creates a new node and adds it at the end of the linked list.
*if the memory allocation for the new node fails, the function returns NULL
*/
list_t *add_node_end(list_t **head, const char *str)
/**Function implementation remains unchanged*/
{
list_t *new_node, *temp;
if (str == NULL)
return (NULL);
/* Allocate memory for the new node */
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
/* Initialize the new node */
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = strlen(str);
new_node->next = NULL;
/* If the list is empty, make the new node the head */
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
/* Find the last node in the list */
temp = *head;
while (temp->next != NULL)
temp = temp->next;
/* Attach the new node to the end of the list */
temp->next = new_node;
return (new_node);
}
