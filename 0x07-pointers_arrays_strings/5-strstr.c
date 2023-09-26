#include "main.h"
/**
 * _strstr - Locates a substring.
 * @haystack: The string to search within.
 * @needle: The substring to find.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle) {
	if (!*needle)
		return (haystack);

	while (*haystack)
	{
		if (*haystack == *needle)
		{
			char *h = haystack, *n = needle;
			while (*h && *n && (*h == *n))
			{
				h++;
				n++;
			}
			if (!*n)
				return (haystack);
		}
		haystack++;

		return (NULL);
	}
