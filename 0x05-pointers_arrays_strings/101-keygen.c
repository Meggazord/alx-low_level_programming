#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random password
 *
 * Return: 0
 */
int main(void)
{
	int password;
	char p;

	srand(time(NULL));

	while (password <= 2645)
	{
		p = rand() % 128;
		password += p;
		putchar(p);
	}

	putchar(2772 - password);

	return (0);
}
