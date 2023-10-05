#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program
 * @ac: Number of arguments
 * @av: Array of argument strings
 *
 * Return: A pointer to a newly allocated string containing
 * the concatenated arguments separated by newlines (\n), or
 * NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	int total_length;
	int i, j, pos;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	total_length = 0;

	for (i = 0; i < ac; i++)
	{
		j = 0;

		while (av[i][j] != '\0')
		{
			total_length++;
			j++;
		}

		total_length++;
	}

	result = malloc(total_length * sizeof(char));

	if (result == NULL)
		return (NULL);

	pos = 0;

	for (i = 0; i < ac; i++)
	{
		j = 0;

		while (av[i][j] != '\0')
		{
			result[pos++] = av[i][j++];
		}
		result[pos++] = '\n';
	}

	result[pos] = '\0';

	return (result);
}
