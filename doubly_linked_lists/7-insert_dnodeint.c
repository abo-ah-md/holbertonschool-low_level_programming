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
check = *h;
i = 0;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

if (check == NULL)
return (NULL);

if (idx == 0)
{
new_node->prev = NULL;
new_node->next = check;
check = new_node;
return (new_node);
}

while (check != NULL && i <= idx)
{
i++;
check = check->next;
}

if (check == NULL)
{
new_node->next = NULL;
new_node->prev = check;
check->next = new_node;
return (new_node);
}
check->prev->next = new_node;
check->prev = new_node;
new_node->next = check;
new_node->prev = check->prev;
return (new_node);
}
