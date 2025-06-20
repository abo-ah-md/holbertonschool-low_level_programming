#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*delete_dnodeint_at_index - remove a node from a linked list
*@index: order number of node in the list
*@head: a pointer to a  node pointer
*Return: 1 on success and -1 on fail
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i;
dlistint_t *check;
i = 0;
check = *head;
if (index == 0)
{
if(check->next != NULL)
{
check->next->prev = NULL;
*head = check->next;
}
free(check);
return (1);
}
if (*head == NULL)
{
return (-1);
}
while (i < index)
{
if(check->next != NULL)
check = check->next;
i++;
}
if(check == NULL && i != index)
return (-1);
if(check)
if (check->next == NULL && index == i)
{
check->prev->next = NULL;
free(check);
return (1);
}

check->prev->next = check->next;
check->next->prev = check->prev;
free(check);
return (1);
}
