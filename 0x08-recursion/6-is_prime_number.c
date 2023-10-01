#include "main.h"

/**
 * is_prime_helper - checks if a number is prime
 * @n: the number to check
 * @x: the current divisor to check n against
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int x)
{
	if (n <= 0)
		return (0);

	if (x * x > n)
		return (1);

	if (n % x == 0)
		return (0);

	return (is_prime_helper(n, x + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
