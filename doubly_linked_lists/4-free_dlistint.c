#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*free_dlistint - adds a node to the list end
*@head:node pointer
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;
while (head != NULL)
temp = head->next;
free(head);
head = temp;
}
