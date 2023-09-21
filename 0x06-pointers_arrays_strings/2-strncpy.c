#include "main.h"
/**
 * _strncpy - Copies string from src to dest max n characters
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * @n: Max no of characters
 * Return: Pointer (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
