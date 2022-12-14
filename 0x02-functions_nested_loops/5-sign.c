#include "main.h"
/**
 * print_sign - check main
 *
 * Return: 1 if num is +ve, 0 if num is 0 or -1 if num is -ve
 */

int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}
	return (value);
}
