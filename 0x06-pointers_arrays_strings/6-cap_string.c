#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: Pointer to the input string
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;
	int new_word;

	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
	}

	i++;

	while (str[i] != '\0')
	{
		if (i == 0 || str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' ||
				str[i] == '}')
		{
			new_word = 1;
		}
		else if (new_word)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
			new_word = 0;
		}
		i++;
	}
	return (str);
}
