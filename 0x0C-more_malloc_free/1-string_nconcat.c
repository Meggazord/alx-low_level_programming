#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate.
 *
 * Return: A pointer to the concatenated string (s1 + s2).
 *         NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1, len2, i, j;

	len1 = 0; 
	len2 = 0;

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0' && len2 < n)
		len2++;

	ptr = malloc(len1 + len2 + 1);

	if (ptr == NULL)
		return (NULL);

	i = 0;
	j = 0;

	while (i < len1)
	{
		ptr[i] = s1[i];
		i++;
	}

	while (j < len2)
	{
		ptr[i + j] = s2[j];
		j++;
	}

	ptr[i + j] = '\0';

	return (ptr);
}
