#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - Full bulletproof test suite for insert_dnodeint_at_index
 *
 * Return: EXIT_SUCCESS
 */
int main(void)
{
    dlistint_t *head = NULL;

    printf("===== TEST 1: Insert into EMPTY LIST =====\n");
    insert_dnodeint_at_index(&head, 0, 111); // valid
    print_dlistint(head);
printf("\n index 1\n");   
 insert_dnodeint_at_index(&head, 1, 222); // invalid
    print_dlistint(head);
printf("\n\n");
    printf("\n===== TEST 2: Insert at HEAD =====\n");
    insert_dnodeint_at_index(&head, 0, 50); // before 111
printf("\n\n");   
 print_dlistint(head);
printf("\n\n");   
    printf("\n===== TEST 3: Insert at END =====\n");
    insert_dnodeint_at_index(&head, 2, 999); // after 111
printf("\n\n");  
  print_dlistint(head);

    printf("\n===== TEST 4: Insert in MIDDLE =====\n");
    insert_dnodeint_at_index(&head, 1, 77); // between 50 and 111
printf("\n\n");   
 print_dlistint(head);

    printf("\n===== TEST 5: Insert NEGATIVE VALUE =====\n");
    insert_dnodeint_at_index(&head, 2, -42); // between 77 and 111
printf("\n\n");
    print_dlistint(head);

    printf("\n===== TEST 6: Invalid INDEX =====\n");
    dlistint_t *result = insert_dnodeint_at_index(&head, 99, 1234);
    if (result == NULL)
        printf("Correctly handled invalid index (NULL returned)\n");
    else
        printf("ERROR: Invalid index insert should return NULL\n");
    print_dlistint(head);

    printf("\n===== TEST 7: Single Node List =====\n");
    free_dlistint(head);
    head = NULL;
    add_dnodeint_end(&head, 1);
    insert_dnodeint_at_index(&head, 1, 2); // end
    insert_dnodeint_at_index(&head, 0, 0); // head
    print_dlistint(head);

    printf("\n===== TEST 8: Duplicate Value Insert =====\n");
    insert_dnodeint_at_index(&head, 1, 1); // insert another 1
    print_dlistint(head);

    printf("\n===== TEST 9: Head → Middle → End =====\n");
    free_dlistint(head);
    head = NULL;
    add_dnodeint_end(&head, 10);
    add_dnodeint_end(&head, 30);
    insert_dnodeint_at_index(&head, 0, 5);  // head
    insert_dnodeint_at_index(&head, 2, 20); // middle
    insert_dnodeint_at_index(&head, 4, 40); // end
    print_dlistint(head);

    printf("\n===== CLEANUP =====\n");
    free_dlistint(head);
    return (EXIT_SUCCESS);
}
