#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to a newly allocated space in memory containing
 * the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *concatenated;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;

	while (s1[len1] != '\0')
		len1++;

	len2 = 0;

	while (s1[len2] != '\0')
		len2++;

	concatenated = malloc((len1 + len2 + 1) * (sizeof(char)));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		concatenated[i] = s1[i];
	}

	i++;

	for (j = 0; j < len2; j++)
	{
		concatenated[i + j] = s2[j];
	}

	j++;

	concatenated[i + j] = '\0';

	return (concatenated);
}
