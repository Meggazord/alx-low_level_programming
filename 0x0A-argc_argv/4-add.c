#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Checks if a string represents a positive number
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 if it's a positive number, 0 otherwise
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	if (argc == 1)
		printf("0\n");

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
	}

	sum = 0;

	for (j = 1; j < argc; j++)
	{
		if (atoi(argv[j]) > 0)
		{
			sum += atoi(argv[j]);
		}
	}

	printf("Sum of positive numbers is %d\n", sum);

	return (1);
}
