#include "main.h"
#include <stddef.h>

/**
 * _strchr - function to locate a specific character in a string
 * @s: the string
 * @c: the character to be located
 * Return: pointer character first occurrence location
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}

	return (NULL);
}
