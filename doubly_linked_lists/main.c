#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/* Forward and backward print for double-check */
void print_forward(dlistint_t *head)
{
    printf("Forward: ");
    while (head)
    {
        printf("%d", head->n);
        if (head->next)
            printf(" -> ");
        head = head->next;
    }
    printf("\n");
}

void print_backward(dlistint_t *head)
{
    // go to tail
    while (head && head->next)
        head = head->next;

    printf("Backward: ");
    while (head)
    {
        printf("%d", head->n);
        if (head->prev)
            printf(" <- ");
        head = head->prev;
    }
    printf("\n");
}

int main(void)
{
    dlistint_t *head = NULL;

    printf("==== START ORDERED INSERTION TEST ====\n");

    /* Simulate this scenario:
     * Start with empty list
     * Add 98 at index 0  → [98]
     * Add -12 at index 1 → [98, -12]
     * Add 98 at index 1  → [98, 98, -12]
     * Add 6 at index 3   → [98, 98, -12, 6]
     */

    insert_dnodeint_at_index(&head, 0, 98);   // [98]
    insert_dnodeint_at_index(&head, 1, -12);  // [98, -12]
    insert_dnodeint_at_index(&head, 1, 98);   // [98, 98, -12]
    insert_dnodeint_at_index(&head, 3, 6);    // [98, 98, -12, 6]

    print_forward(head);
    print_backward(head);

    printf("==== EXPECTED FORWARD: 98 -> 98 -> -12 -> 6 ====\n");
    printf("==== EXPECTED BACKWARD: 6 <- -12 <- 98 <- 98 ====\n");

    free_dlistint(head);
    return (0);
}
