#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	int i, j;
	char *s;

	if (str == NULL)
		return (NULL);

	for (j = 0; j <= *str; j++)
	{
	}

	j += 1;
	s = malloc(sizeof(char) * j);

	for (i = 0; i < j; i++)
		s[i] = str[i];

	if (s == NULL)
		return (NULL);
	return (s);
}
