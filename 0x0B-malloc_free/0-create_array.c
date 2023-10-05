#include <stdlib.h>
#include "main.h"

/**
 * create_array - Create array of chars
 * @size: size of array
 * @c: character to initialize array
 *
 * Return: Pointer to the allocated memory,
 *         NULL if allocation fails or size is 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = (char *)malloc((size) * sizeof(char));

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}

		array[size] = '\0';
	}

	return (array);
}
