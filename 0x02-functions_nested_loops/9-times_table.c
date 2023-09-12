#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int x, y, i;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			i = x * y;

			if (i < 10)
				_putchar(' ');
			else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}

			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
