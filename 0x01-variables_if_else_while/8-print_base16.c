#include <stdio.h>
/**
* main - main block
* Description: prints all numbers of lower case 16
* Return: 0
*/
int main(void)
{
char n = '0';
char a = 'a';
while (n <= '9')
{
	putchar(n);
	n++;
}
while (a <= 'f')
{
	putchar(a);
	a++;
}
putchar('\n');
return (0);
}
