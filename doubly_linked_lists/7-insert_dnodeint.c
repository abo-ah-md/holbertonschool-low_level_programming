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
    unsigned int i = 0;

    if (!h)
        return (NULL);

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = NULL;
    check = *h;

    if (idx == 0)
    {
        new_node->next = *h;
        if (*h)
            (*h)->prev = new_node;
        *h = new_node;
        return (new_node);
    }

    while (check && i < idx)
    {
        check = check->next;
        i++;
    }

    if (i != idx)
    {
        free(new_node);
        return (NULL); // Index out of range
    }

    if (check) // Insert before check
    {
        new_node->next = check;
        new_node->prev = check->prev;

        if (check->prev)
            check->prev->next = new_node;
        else
            *h = new_node;

        check->prev = new_node;
        return new_node;
    }
    else // Insert at end
    {
        dlistint_t *tail = *h;
        while (tail && tail->next)
            tail = tail->next;

        if (tail)
        {
            tail->next = new_node;
            new_node->prev = tail;
        }
        else
            *h = new_node;

        return new_node;
    }
}
