#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
*add_node - adds  a nodes
*@head: node struct
*@str: string
*Return: adress of the new node
*/
list_t *add_node(list_t **head, const char *str)
{
int len;
list_t *new_node;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
for (len = 0; str[len]; len++)
;
new_node->len = len;
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->next = *head;
*head = new_node;
return (new_node);
}
