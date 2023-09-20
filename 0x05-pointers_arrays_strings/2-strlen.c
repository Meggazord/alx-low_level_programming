#include "main.h"
#include <string.h>

/**
 * _strlen - gives length of a string
 * @s: string
 * Return: length of string s
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
