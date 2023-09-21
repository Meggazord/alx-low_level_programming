#include "main.h"

/**
 * leet - Encodes a string into "1337"
 * @str: Pointer to the input string
 * Return: Pointer to the modified string
 */
char *leet(char *str)
{
	int i = 0;
	int j;
	char leet_replace[] = "aAeEoOtTlL";
	char leet_chars[] = "4433007711";

	while (str[i] != '\0')
	{
		j = 0;
		while (leet_replace[j] != '\0')
		{
			if (str[i] == leet_replace[j])
			{
				str[i] = leet_chars[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (str);
}
