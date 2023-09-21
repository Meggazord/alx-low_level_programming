#include "main.h"

/**
 * string_toupper - Change lowercase letters to uppercase.
 * @str: string.
 *
 * Return: Pointer updated string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (i != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}

	return (str);
}
