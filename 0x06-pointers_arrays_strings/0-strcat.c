#include "main.h"

/**
 * *_strcat - check main
 * @dest: an input string
 * @src: an input string
 * Return: the resultant string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	
	while (*src != '\0') 
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
}
