#include "main.h"

/**
 * _strncpy - check main
 * @dest: copy to
 * @src: copy from
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
		if (j < n)
			dest[j] = src[j];

		while (j < n)
			dest[j++] = '\0';
		return (dest);
}
