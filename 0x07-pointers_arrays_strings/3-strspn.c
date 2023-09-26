#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string to be searched
 * @accept: Pointer to the string containing accepted characters
 * Return: The number of bytes in the initial segment of s consisting only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		y = 0;

		for (; accept[y] != s[x]; y++)
		{
			if (accept[y] == '\0')
				return (x);
		}
	}

	return (x);
}
