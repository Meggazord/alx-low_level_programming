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
	if (ac == 0 || av == NULL)
		return (NULL);

	int total_length = 0;

	for (int i = 0; i < ac; i++)
	{
		int j = 0;

		while (av[i][j] != '\0')
		{
			total_length++;
			j++;
		}

		total_length++;
	}

	char *result = malloc(total_length * sizeof(char));

	if (result == NULL)
		return (NULL);

	int pos = 0;

	for (int i = 0; i < ac; i++)
	{
		int j = 0;

		while (av[i][j] != '\0')
		{
			result[pos++] = av[i][j++];
		}
		result[pos++] = '\n';
	}

	result[pos] = '\0';

	return (result);
}
