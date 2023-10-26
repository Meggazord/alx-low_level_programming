#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A string of 0 and 1 characters.
 *
 * Return: The converted number, or 0 if character is not 0 or 1,
 *         or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum;
	unsigned int i;

	sum = 0;
	i = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		sum = sum + ((*b - '0') * (unsigned int)pow(2, i));
		b++;
		i++;
	}

	return (sum);
}
