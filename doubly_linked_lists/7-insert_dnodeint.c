#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*insert_at_head- inserts node index at the head
*@h: pointer to node pointer
*@new_node: pointer to node pointer
*Return: the nth node pointer
*/
dlistint_t *insert_at_head(dlistint_t **h, dlistint_t *new_node)
{
new_node->next = *h;
if (*h)
(*h)->prev = new_node;
*h = new_node;
return (new_node);
}
/**
*i_b_node - inserts node index before the end
*@new_node: pointer to node pointer
*@h: pointer to node pointer
*@check: pointer to node pointer
*Return:the nth node of index
*/
dlistint_t *i_b_node(dlistint_t **h, dlistint_t *check, dlistint_t *new_node)
{
new_node->next = check;
new_node->prev = check->prev;
if (check->prev)
check->prev->next = new_node;
else
*h = new_node;
check->prev = new_node;
return (new_node);
}
/**
*insert_at_end - inserts node index at the end
*@new_node: pointer to node pointer
*@h: pointer to node pointer
*Return:the nth node of index
*/
dlistint_t *insert_at_end(dlistint_t **h, dlistint_t *new_node)
{
dlistint_t *tail = *h;
if (!tail)
{
*h = new_node;
return (new_node);
}
while (tail->next)
tail = tail->next;
tail->next = new_node;
new_node->prev = tail;
return (new_node);
}
/**
*insert_dnodeint_at_index - inserts node index
*@h: pointer to node pointer
*@idx: index of the node
*@n: number
*Return:the nth node of index
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *check = *h;
unsigned int i = 0;
if (!h)
return (NULL);
new_node = malloc(sizeof(dlistint_t));
if (!new_node)
return (NULL);
new_node->n = n;
new_node->next = NULL;
new_node->prev = NULL;
if (idx == 0)
return (insert_at_head(h, new_node));
while (check && i < idx)
{
check = check->next;
i++;
}
if (i != idx)
{
free(new_node);
return (NULL);
}
if (check)
return (i_b_node(h, check, new_node));
return (insert_at_end(h, new_node));
}
