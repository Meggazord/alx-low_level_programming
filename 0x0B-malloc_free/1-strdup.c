#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to be duplicated.
 *
 * Return: Pointer to the duplicated string or NULL if str is NULL
 * or if memory allocation fails.
 */
char *_strdup(char *str)
{
	int length;
	char *duplicate;


	if (str == NULL)
	{
		return (NULL);
	}

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate != NULL)
	{
		for (int i = 0; i <= length; i++)
		{
			duplicate[i] = str[i];
		}
	}

	return (duplicate);
}
