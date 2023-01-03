#include "main.h"
#include <stddef.h>

/**
 * _strstr - locate a substring
 * @haystack: the string to search
 * @needle: the string to find
 *
 * Return: char value
 */
char *_strstr(char *haystack, char *needle)
{
	char *abubakar = needle, *mahmud = haystack;

	while (*haystack)
	{
		mahmud = haystack;
		needle = abubakar;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = mahmud + 1;
	}
	return (NULL);
}
