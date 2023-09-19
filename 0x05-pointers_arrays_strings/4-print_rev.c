#include "main.h"
/**
 * print_rev - print string in reverse order
 * @s: string
 * Return: void.
 */
void print_rev(char *s)
{
	int x = 0;

	while (s[x])
		x++;

	x--;

	while (x >= 0)
	{
		_putchar(s[x]);
		x--;
	}
	_putchar('\n');
}
