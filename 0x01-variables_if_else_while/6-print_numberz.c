#include <stdio.h>
#include <stdlib.h>
/**
* main - main block
* Description: print all numbers greater than 0 less than 10
* Return: 0
*/
int main(void)
{
int n = 0;
while (n < 10)
        {
                putchar(48 + n);
                n++;
        }
putchar('\n');
return (0);
}
