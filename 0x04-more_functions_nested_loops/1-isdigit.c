#include "main.h"

/**
 * _isdigit - check main
 * @c: The character to be check
 *
 * Return: 1 if its digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
		return (1);
	else
		return (0);
}
