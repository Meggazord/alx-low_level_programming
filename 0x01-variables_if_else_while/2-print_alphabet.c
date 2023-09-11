#include <stdio.h>

/**
 * main - main block
 * Description: print alphabet in lower case.
 * Return: 0
 */

int main(void)
{
	char a = 'a';
	while (a =< 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return 0;
}
