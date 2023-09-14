#include "main.h"

/**
 * print_diagonal - check for a digit
 * @n : number of \\ to be printed
 * Return:void
 */

void print_diagonal(int n)
{

	int x = 0, y;

	while (x < n && n > 0)
	{
		y = 0;
		while (y < i)
		{
			_putchar(' ');
			y++;
		}

		_putchar(92);
		_putchar('\n');
		x++;
	}
	if (x <= 0)
		_putchar('\n');

}
