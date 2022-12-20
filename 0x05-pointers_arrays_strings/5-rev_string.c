#include "main.h"

/**
 * rev_string - check main
 * @s: The string to be checked
 * Return: Always 0
 */
void rev_string(char *s)
{
	int i, j, rev;

	i = 0;
	j = 0;

	while (s[i] != '\0')
	{
		j++;
	}
	j--;
	while (j > i)

	{
		rev = s[j];
		s[j--] = s[i];
		s[i++] = rev;
	}
}
