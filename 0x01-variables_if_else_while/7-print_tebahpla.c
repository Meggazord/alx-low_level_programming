#include <stdio.h>
/**
* main - main block
* Description: print lower case alphabet backwards
* Return: 0
*/
int main(void)
{
char a = 'z';
while (a >= 'a')
{
	putchar(a);
	a--;
}
putchar('\n');
return (0);
}
