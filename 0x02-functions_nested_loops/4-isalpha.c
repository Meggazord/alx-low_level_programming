#include "main.h"
/**
 * int _isalpha - check if character is alpha
 * @c: value to be checked 
 * Return: 1 if c is alpha. 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z')|| (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
~    
