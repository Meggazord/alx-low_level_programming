#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int sign = 1; 
	int result = 0;

	while (*s == ' ')
		s++;

	while (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}

   
    	while (*s >= '0' && *s <= '9')
    	{
        	result = result * 10 + (*s - '0');
        	s++;
    	}

    return (sign * result)
}
