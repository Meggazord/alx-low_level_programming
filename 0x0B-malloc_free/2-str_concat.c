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
	int len1 = 0, len2 = 0, i;
	char *concatenated;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s1[len2] != '\0')
		len2++;

	concatenated = malloc((len1 + len2 + 1) * (sizeof(char)));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];

	for (i = 0, i < len2; i++)
		concatenated[len1 + i] = s2[i];

	contcatenated[len1 + len2] = '\0';

	return (concatenated);
}
