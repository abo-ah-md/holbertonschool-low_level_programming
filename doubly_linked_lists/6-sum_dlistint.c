#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include "lists.h"
/**
*sum_dlistint - gets node index
*@head:node pointer
*Return:sum all of node n data;
*/
int sum_dlistint(dlistint_t *head)
{
unsigned int sum;
sum = 0;
if (head == NULL)
return (0);
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
