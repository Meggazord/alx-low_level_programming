#include "main.h"
/**
 * puts2 - print every other character in a string
 * @str: string
 * Return: void.
 */

void puts2(char *str)
{
	int x = 0;

	while (str[x])
	{
		if (x % 2 == 0)
			_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
