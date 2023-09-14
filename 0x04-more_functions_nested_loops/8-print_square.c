#include "main.h"

/**
 * print_square - check for a digit
 * @n : number of _ to be printed
 * Return:void
 */

void print_square(int n)
{

	int x = 0, y;

	while (x < n && n > 0)
	{
		y = 0;
		while (y < n)
		{
			_putchar('#');
			y++;
		}

		_putchar('\n');
		x++;
	}
	if (x == 0)
		_putchar('\n');

}
