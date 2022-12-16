#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer.
 * @n: The integer to prints.
 *
 * Return: Always 0
 */

void print_number(int n)
{
	unsigned int A = n;

	if (n < 0)
	{
		n *= -1;
		A = n;
		_putchar('-');
	}

	A /= 10;

	if (A != 0)
		print_number(A);

	_putchar((unsigned int) n % 10 + '0');
}
