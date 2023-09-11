#include <stdio.h>
/**
* main - main block
* Description: prints all alphabit characters in lower case except "q" and "e"
* Return: 0
*/
int main(void)
{
char a = 'a';
while (a <= 'z')
{
	if (a != 'e' && a != 'q')
	{
		putchar(a);
	}
	a++;
}
putchar('\n');
return (0);
}
