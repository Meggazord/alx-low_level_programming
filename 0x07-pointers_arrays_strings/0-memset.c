#include "main.h"

/**
 *_memset - fills n bytes of  memory a constant
 *@s: pointer to memory area
 *@b: constant byte
 *@n: number of bytes
 *Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
