#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - Prints the lowercase alphabet followed by a newline
 *
 * Return: void
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
