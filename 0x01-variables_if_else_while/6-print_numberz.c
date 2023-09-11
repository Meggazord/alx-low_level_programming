#include <stdio.h>
#include <stdlib.h>
/**
* main - main block
* Description: print all numbers greater than 0 less than 10
* Return: 0
*/
int main(void)
{
char n = '0';
while (n <= '9')
        {
                putchar(n);
                n++;
        }
putchar('\n');
return (0);
}
