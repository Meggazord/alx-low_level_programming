#include "main.h"
/**
 * more_numbers - prints 0 to 14; 10 times
 */

void more_numbers(void)
{
	int i, n;
	for (i = 0; i < 11; i++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n > 9)
				_putchar((n / 10) + 48);
			_putchar((n % 10) + 48);
		}
	}
	_putchar('\n');
}
