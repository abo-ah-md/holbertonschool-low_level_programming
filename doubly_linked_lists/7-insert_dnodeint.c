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
if (*h == NULL)
return (NULL);
check = *h;
i = 0;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
if (idx == 0)
{
new_node->prev = NULL;
new_node->next = check;
*h = new_node;
return (new_node);
}
while (check != NULL && i < idx)
{
check = check->next;
i++;
}
if (check == NULL)
return (NULL);
if (check->next == NULL)
{
return (add_dnodeint_end(h,n));
}
new_node->prev = check->prev;
check->prev->next = new_node;
check->prev = new_node;
new_node->next = check;
return (new_node);
}
