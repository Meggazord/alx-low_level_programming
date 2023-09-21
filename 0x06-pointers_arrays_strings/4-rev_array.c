#include "main.h"
/**
 * reverse_array - Reverse an array of integers
 *
 * @a: Array Pointer
 * @n: Number
 *
 * Description: This function reverses an array of integers 
 */
void reverse_array(int *a, int n)
{
	int x = 0;
	int y = n - 1;
	int temp;

	while (x < y)
	{
		tmp = a[x];
		a[x] = a[y];
		a[y] = temp;
		x++;
		y--;
	}
}
