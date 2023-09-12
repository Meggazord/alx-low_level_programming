#include <stdio.h>
#include "main.h"
/**
 * main - Entry point, prints the string "_putchar"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c[] = "_putchar";
	int i;
	int length = sizeof(c) - 1;

	for (i = 0; i < length; i++)
		_putchar(c[i]);
	_putchar('\n');
	return (0);
}
