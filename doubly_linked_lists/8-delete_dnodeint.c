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
check = malloc(sizeof(dlistint_t));
if (check == NULL)
return (-1);
check = *head;

if (index == 0 && check->next != NULL)
{
check->next->prev = NULL;
if(check->next->next != NULL)
check->next->next = check->next->next;

if(check->next->next == NULL)
check->next->next = NULL;
*head = check->next;
free(check);
return (1);
}
if(index == 0)
{
free(check);
return (1);
}
while (i < index)
{
if (check == NULL)
return (-1);

check = check->next;
i++;
if (check->next == NULL && index == i)
{
check->prev->next = NULL;
free(check);
return (1);
}

if (i == index)
{
check->prev->next = check->next;
check->next->prev = check->prev;
free(check);
return (1);
}
}
return (-1);
}
