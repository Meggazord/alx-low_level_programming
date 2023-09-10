#include <stdio.h>
/**
 * main - main block
 * Description: print all combination of 2 digit numbers
 * Return: 0
 */
int main(void)
{
char n = '0';
char m = '0';
while (n <= '9')
	{
	while (m <= '9')
		{
		putchar(n);
		putchar(m);
		putchar(',');
		putchar(' ');
		m++;
		}
	m = '0';
	n++;
	}
putchar('\n');
return (0);
}
