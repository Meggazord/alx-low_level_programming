#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point of the program
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, appropriate error code on failure.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	int (*func_ptr)(int, int) = get_op_func(operator);

	if (func_ptr == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", func_ptr(num1, num2));

	return (0);
}
