#include "main.h"

/**
 * int _isupper - checks if character is upper case
 *@c: variable to be checked
 * Return: 1 if upper case. 0 otherwise
 */
int _isupper(int c)
{
	if (c => 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
