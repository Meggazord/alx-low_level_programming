#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array containing the command-line arguments
 *
 * Return: 0 (Success) or 1 (Error)
 */
int main(int argc, char *argv[])
{
	int x, y, sum;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	sum = x * y;

	printf("%d\n", sum);

	return (0);
}
