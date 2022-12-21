#include "main.h"

/**
 * rev_string - check main
 * @s: The string to be checked
 * Return: Always 0
 */
void rev_string(char *s)
{
	int i, j, k, rev;

	i = 0;
	j = 0;

	while (s[i] != '\0')
	{
		j++;
	}
	j = i - 1;
	k = 0;

	while (k > j)

	{
		rev = s[k];
		s[k] = s[j];
		s[j] = rev;
		k++;
		j--;
	}
}
