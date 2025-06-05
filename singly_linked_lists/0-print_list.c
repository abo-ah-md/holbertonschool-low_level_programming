#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*print_list - prints the elements of a nodes
*@h: node struct
*Return: number of pointers
*/

size_t print_list(const list_t *h)
{
int i = 0;
while (h != NULL)
{

if (h->str == NULL)
printf("[0] (nill)\n");
else
printf("[%d] %s\n", h->len, h->str);
i++;
h = h->next;
}
return (i);
}
