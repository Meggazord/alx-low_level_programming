#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, appropriate error code on failure.
 */
int main(int argc, char *argv[])
{
	int bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}

	char *address = (char *)main;

	for (i = 0; i < bytes - 1; i++)
	{
		printf("%02hhx ", address[i]);
	}

	printf("%02hhx\n", address[i]);

	return (0);
}
