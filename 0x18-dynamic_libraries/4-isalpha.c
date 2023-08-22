#include "main.h"

/**
 * _isalpha - main
 * @c: The character to be check
 * Description: function returns 1 or zero
 * Return: 1 if is upper and 0 if otherwise
 */

int _isalpha(int c)
{
	char upper, lower;
	int isletter = 0;

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		for (lower = 'a'; lower <= 'z'; lower++)
		{
			if (c == upper || c == lower)
				isletter = 1;
		}
	}

	return (isletter);
}
