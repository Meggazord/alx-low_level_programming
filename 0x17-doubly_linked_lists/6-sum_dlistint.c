#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t list
 * @head: Pointer to the head of the list
 *
 * Return: Sum of all integers (n) in the list, or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
    int sum;

    sum = 0;

    while (head != NULL)
    {
        sum += head->n;
        head = head->next;
    }

    return (sum);
}
