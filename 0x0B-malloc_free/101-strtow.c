#include <stdlib.h>
#include "main.h"

/**
 * countWords - helper function to count the number of words in a string
 * @str: string to evaluate
 *
 * Return: number of words
 */
int countWords(char *str)
{
	int inWord = 0; 
	int wordCount = 0;

	while (*str)
	{
		if (*str == ' ')
			inWord = 0;
		else if (inWord == 0)
		{
			inWord = 1;
			wordCount++;
		}
		str++;
	}
	return (wordCount);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success) or NULL (Error)
 */
char **strtow(char *str)
{
	char **wordsArray, *word;
	int i, wordIndex = 0, wordLength = 0, totalWords, strIndex = 0, wordStart, wordEnd;

	while (str[strIndex])
	{
		wordLength++;
		strIndex++;
	}
	totalWords = countWords(str);

	if (totalWords == 0)
		return (NULL);

	wordsArray = (char **)malloc(sizeof(char *) * (totalWords + 1));
	if (wordsArray == NULL)
		return (NULL);

	for (i = 0; i <= wordLength; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (wordLength > 0)
			{
				wordEnd = i;
				word = (char *)malloc(sizeof(char) * (wordLength + 1));
				if (word == NULL)
					return NULL;
				wordStart = wordEnd - wordLength;
				while (wordStart < wordEnd)
					*word++ = str[wordStart++];
				*word = '\0';
				wordsArray[wordIndex] = word - wordLength;
				wordIndex++;
				wordLength = 0;
			}
		}
		else if (wordLength++ == 0)
			wordStart = i;
	}

	wordsArray[wordIndex] = NULL;

	return (wordsArray);
}
