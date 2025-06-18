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
i = 0;
new_node = malloc(sizeof(dlistint_t));
if(new_node == NULL)
return NULL;
new_node->n= n;
check = *h;

if(idx == 0)
{
new_node->prev = NULL;
new_node->next = check;
*h = new_node;
}

while(i != idx)
{
i++;
check = check->next;
printf("still going %d \n", check->n);
if(check == NULL)
printf("stopped and check n = %d \n", check->n);
}

if(check == NULL)
{
new_node->prev = check;
new_node->next = NULL;
check->next = new_node;
check = *h;
return new_node;
}

new_node->prev = check;
new_node->next = check->next;
check->next = new_node;
check = *h;
return new_node;
}
