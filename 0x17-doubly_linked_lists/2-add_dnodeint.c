#include "lists.h"

/**
 * add_dnodeint - adds node at the beg of a list
 * @head: Pointer to the head of the list
 * @n: data input at first node
 *
 * Return: Number of elements in the list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *temp = malloc(sizeof(dlistint_t));

    if (temp == NULL)
    {
        fprintf(stderr, "Memory allocation failed.\n");
        return NULL;
    }

    temp->n = n;
    temp->prev = NULL;
    temp->next = *head;

    if (*head != NULL)
        (*head)->prev = temp;

    *head = temp;

    return temp;
}
