#include "main.h"
/**
 * main - check if character is alpha
 * Return: 1 if c is alpha. 0 otherwise.
 */
int _isalpha(int c)
{
	if (_islower(c) || (c >= 'A' && c <= 'Z'))
		return 1;
	else
		return 0;
}
~    
