#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*get_dnodeint_at_index - gets node index
*@head:node pointer
*@index: index of the node
*Return:the nth node of index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;
i = 0;
while (head != NULL)
{
if (i == index)
return (head);
i++;
head = head->next;
}

return (NULL);
}
