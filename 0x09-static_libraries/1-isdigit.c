#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks if character is a digit
 *@c: variable to be checked
 * Return: 1 if true. 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
