#include "main.h"
/**
 * rev_string - funtion to reverse string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int length = 0;
	char *start = s;
	char *end = s;
	char temp;

	while (*end != '\0')
	{
		length++;
		end++;
	}

	end--;


	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
