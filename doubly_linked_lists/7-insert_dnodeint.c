#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*insert_dnodeint_at_index - gets node index
*@h: pointer to node pointer
*@idx: index of the node
*@n: number
*Return:the nth node of index
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *check;
unsigned int i;
i = 1;
new_node = malloc(sizeof(dlistint_t));
if(new_node == NULL)
return NULL;
new_node->n = n;
check = *h;
if(idx == 0)
{
new_node->prev = NULL;
new_node->next = check;
if (check != NULL)
check->prev = new_node;
*h = new_node;
return (new_node);
}
if(check->next == NULL && idx == 1)
{
return NULL;
}
while(check->next != NULL)
{
check = check->next;
if(i == idx)
break;
i++;
}
if(i == idx && check->next != NULL)
{
printf("jsd");
new_node->next = check;
new_node->prev = check->prev;
check->prev->next = new_node;
check->prev = new_node;
return new_node;
}

if (idx > i)
{
return(NULL);
}
if(check->next == NULL)
{
new_node->next = NULL;
new_node->prev = check;
check->next = new_node;
return new_node;
}
return new_node;
}
