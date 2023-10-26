#include "main.h"
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

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		sum = sum * 2 + (b[i] - '0');
	}

	return (sum);
}
