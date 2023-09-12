#include "main.h"
/**
 * main - check if character is lowercase
 * Return: 1 if c is lower case. 0 otherwise.
 */
int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return 1;
	else
		return 0;
}
