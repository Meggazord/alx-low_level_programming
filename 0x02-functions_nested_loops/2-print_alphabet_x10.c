#include "main.h"
#include <stdio.h>
/**
* main - prints the alphabit 10 times
* Return: 0 on success.
*/
void print_alphabet_x10(void)
{
        int i;

        for (i = 0; i < 10; i++)
                print_alphabet();
        _putchar('\n');
}
