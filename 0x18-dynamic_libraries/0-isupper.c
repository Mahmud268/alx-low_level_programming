#include "main.h"

/**
 * _isupper - check main
 * @c: The character to be check
 *
 * Return: 1 of is upper and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
