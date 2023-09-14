#include "main.h"

/**
 * print_line - draws a straight line on terminal 
 *
 * @n: the number of _ to be printed
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
