#include <stdio.h>
/**
* main - main block
* Description: print all combination of 2 digit numbers
* Return: 0
*/
int main(void)
{
int n = 0;
int m = 1;
int x = 2;
while (n <= 7)
{
	while (m <= 8)
	{
		while (x <= 9) 
		{
			putchar(48 + n);
			putchar(48 + m);
			putchar(48 + x);
			if (n != 7 || m != 8 || x != 9)
			{
				putchar(',');
				putchar(' ');
			}
			x++;
		}
		m++;
		x = m + 1;
	}
	n++;
}
putchar('\n');
return (0);
}
