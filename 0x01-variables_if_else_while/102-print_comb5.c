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
char x = '0';
char y = '0';
while (n <= '9')
	{
	while (m <= '9')
		{
		while (x <= '9') 
			{
			while (y <= '9')
				putchar(n);
				putchar(m);
				putchar(' ');
				putchar(x);
				putchar(y);
				putchar(',');
				putchar(' ');
				y++;
			}	
		y = '0';
		x++;
		}
	m = '0';
	x++;
	}
putchar('\n');
return (0);
}
