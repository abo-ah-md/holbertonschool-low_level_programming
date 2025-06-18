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
new_node->n = n;
check = *h;

if(idx == 0 && check == NULL)
{
new_node->prev = NULL;
new_node->next = check;
*h = new_node;
printf(" hello from start i=%d\n",i);
return (new_node);
}
while(i < idx)
{
printf(" hello from while i=%d\n",i);
if(check->next == NULL)
{
printf(" hello from while if check->next == NULL i=%d\n",i);
break;
}
check = check->next;
i++;
}
if(i == idx)
printf("i = idx\n");
if(i != idx)
printf("i != idx\n");
if(check->next == NULL)
{
printf(" hello from end i=%d\n",i);
new_node->prev = check;
new_node->next = NULL;
check->next = new_node;
return new_node;
}
printf(" hello from middle i=%d\n",i);
new_node->next = check;
new_node->prev = check->prev;
check->prev->next = new_node;
check->prev = new_node;
return new_node;
}
