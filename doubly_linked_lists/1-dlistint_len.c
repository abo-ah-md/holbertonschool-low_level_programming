#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*dlistint_len - prints doubly linked list elements
*@h:node
*Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
int number_of_nodes;
number_of_nodes = 0;
while (h != NULL)
{
h = h->next;
number_of_nodes++;
}
return (number_of_nodes);
}
