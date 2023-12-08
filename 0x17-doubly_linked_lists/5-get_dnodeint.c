#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node, starting from 0
 *
 * Return: Address of the node at the index, or NULL if it doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int i;

    i = 0;

    while (head != NULL)
    {
        if (i == index)
            return (head);

        head = head->next;
        i++;
    }

    return (NULL);
}
