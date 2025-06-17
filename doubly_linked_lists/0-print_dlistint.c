#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*print_dlistint - prints doubly linked list elements
*@h:string
*Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
int number_of_nodes;
number_of_nodes = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
number_of_nodes++;
}
return (number_of_nodes);
}
