#include "lists.h"

int main()
{
    dlistint_t *head, *ptr;

    head = NULL;

    head = addToEmpty(head, 45);
    head = add_dnodeint(&head, 34);
    head = add_dnodeint(&head, 24);


    if (head != NULL)
        printf("%d\n", head->n);
    else
        printf("Error: Failed to create the list.\n");

    printf("%d\n", head->n);
    ptr = head->next;
    printf("%d\n", ptr->n);

    ptr = ptr->next;
    printf("%d\n", ptr->n);

    return (0);
}

dlistint_t *addToEmpty(dlistint_t *head, int n)
{
    dlistint_t *temp = malloc(sizeof(dlistint_t));

    if (temp == NULL)
    {
        fprintf(stderr, "Memory allocation failed.\n");
        return (NULL);
    }

    temp->prev = NULL;
    temp->n = n;
    temp->next = NULL;

    if (head == NULL)
        head = temp;

    return (head);
}