#include "main.h"

/**
 * print_line - check main
 *
 * Return: Always 0.
 */
 void print_line(int n)
{
	int A;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (A = 1; A <= n; A++)
			_putchar('_');
	}

	_putchar('\n');
}
