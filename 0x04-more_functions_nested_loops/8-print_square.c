#include "main.h"

/**
 * print_square - prints a square 
 * @size : is the size of the square 
 * Return:void
 */

void print_square(int size)
{

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	
	int x, y;
	
	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
