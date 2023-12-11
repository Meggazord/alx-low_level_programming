#include "main.h"
/**
  * _memcpy - a function to copy memory
  * @dest: destination
  * @src: source
  * @n: number of bytes to copy
  *
  * Return: dest pointer
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
