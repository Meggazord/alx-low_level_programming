#include <stdio.h>
#include <stdlib.h>
/**
* main - main block
* Description: print all combination of 2 digit numbers
* Return: 0
*/
int main(void)
{
int n = 0;
int m = 0;
while (n <= 9)
{
	while (m <= 9)
	{
		putchar(48 + n);
		putchar(48 + m);
		putchar(',');
		putchar(' ');
		m++;
	}
	m = 0;
	n++;
}
putchar('\n');
return (0);
}
