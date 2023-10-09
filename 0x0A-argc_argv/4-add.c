#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_number - Checks if a string represents a positive number
 * @str: String to be checked
 *
 * Return: 1 if it's a positive number, 0 otherwise
 */

int is_positive_number(char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array containing the command-line arguments
 *
 * Return: 0 if successful, 1 if there's an error
 */

int main(int argc, char *argv[])
{
	int j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (j = 1; j < argc; j++)
	{
		if (is_positive_number(argv[j]))
		{
			sum += atoi(argv[j]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("Sum of positive numbers is %d\n", sum);

	return (0);
}
