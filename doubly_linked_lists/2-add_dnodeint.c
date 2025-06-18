#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*add_dnodeint - prints doubly linked list elements
*@head:node pointer
*@n: number
*Return:new node adress
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

dlistint_t *new_node, *check;
check = *head;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = check;
new_node->prev = NULL;
if (check != NULL)
(check)->prev = new_node;
check = new_node;
return (new_node);
}
