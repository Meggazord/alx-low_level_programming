#include "lists.h"

/**
 * print_dlistint - Prints all elements of a dlistint_t list
 * @h: Pointer to the head of the list
 *
 * Return: Number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
    size_t count;

    count = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        count++;
    }

    return (count);
}
