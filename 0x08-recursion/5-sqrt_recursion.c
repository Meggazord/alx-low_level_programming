#include "main.h"

/**
 * check_square - checks if x is a perfect square of n
 * @n: the number to find the square root of
 * @x: the current guess for the square root
 * Return: 1 if x is a perfect square of n, 0 otherwise
 */
int check_square(int n, int x)
{
	if (x * x == n)
		return (x);

	else if (x * x > n)
		return (0);

	return (check_square(n, x + 1));
}

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: the number to find the square root of
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (check_square(n, 0));
}
