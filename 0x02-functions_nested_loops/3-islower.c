#include "main.h"
/**
 * _islower - check main
 *
 * @c: the character to be checked
 * 
 * Return: 1 if its lower and 0 if otherwise
 */

int _islower(int c)
{
	char b;
	int lower = 0;

	for (b = 'a'; b <= 'z'; b++)
	{
		if (b == c)
			lower = 1;
	}

	return (lower);
}
