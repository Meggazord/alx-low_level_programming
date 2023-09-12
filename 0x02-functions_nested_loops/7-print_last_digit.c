#include "main.h"
/**
* print_last_digit - check if character is lowercase
* @n: check value of n
* Return: 1 if c is lower case. 0 otherwise.
*/
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = -n;

	last_digit = n % 10;

	_putchar(last_digit + '0');

	return (last_digit);
}
