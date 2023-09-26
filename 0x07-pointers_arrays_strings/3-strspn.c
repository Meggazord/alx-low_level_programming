#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string to be searched
 * @accept: Pointer to the string containing accepted characters
 * Return: The number of bytes in the initial segment of s consisting only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 1;

	while (*s && found) {
		found = 0;
		for (char *a = accept; *a; a++)
		{
			if (*s == *a)
			{
				count++;
				found = 1;
				break;
			}
		}
		if (found)
		{
			s++;
		}
	}

	return (count);
}
