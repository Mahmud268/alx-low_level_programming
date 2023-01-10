#include "main.h"
#include <stdlib.h>

/**
 * create_array - check main
 * @size: the size of the array
 * @c: A character to initialized the array
 * Return: A pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(sizeof(char) * size);

	if (s == NULL || size == 0)
		return (NULL);

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
