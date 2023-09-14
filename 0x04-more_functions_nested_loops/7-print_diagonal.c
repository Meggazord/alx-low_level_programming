#include "main.h"

/**
 * print_diagonal - check for a digit
 * @n : number of \\ to be printed
 * Return:void
 */

void print_diagonal(int n)
{
	if (i <= 0)
	{
		_putchar('\n');
		return;
	}

	int i = 0, j;

	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}

		_putchar('_');
		_putchar('\n');
		i++;
	}
}
