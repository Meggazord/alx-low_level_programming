#include <stdio.h>
/**
 * main - main block
 * Description: prints from 0 to 9 with commas
 * Return: 0
 */
int main(void)
{
char n = '0';
while (n <= '9')
        {
                putchar(n);
		putchar(',');
		putchar(' ');
                n++;
        }
putchar('\n');
return (0);
}
