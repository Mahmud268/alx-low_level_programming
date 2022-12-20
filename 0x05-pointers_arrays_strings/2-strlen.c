#include "main.h"

/**
 * _strlen - check main
 * @s: an input character to be checked
 *
 * Return: lenght of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
