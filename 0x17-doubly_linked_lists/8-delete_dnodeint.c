#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t linked list.
 * @head: pointer to a pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current, *next;
    unsigned int i;

    current = &head;

    if (*head == NULL)
        return (-1);

    if (index == 0)
    {
        *head = current->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(current);
        return (1);
    }

    i = 0;

    for (i = 0; current != NULL && i < index; i++)
        current = current->next;

    if (current == NULL)
        return (-1);

    current->prev->next = current->next;

    if (current->next != NULL)
        current->next->prev = current->prev;

    free(current);
    return (1);
}