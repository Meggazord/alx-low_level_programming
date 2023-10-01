#include "main.h"

/**
 * wildcmp - compares two strings.
 * @s1: string 1.
 * @s2: string 2. It can contain a * as a special character.
 * Return: 1 if the strings are identical, 0 if not.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		if (*s1 == '\0')
			return (wildcmp(s1, s2 + 1));
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}

	if (*s1 == '\0' || *s2 == '\0')
		return (*s1 == *s2);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(s1 + 1, s2 + 1));
}
