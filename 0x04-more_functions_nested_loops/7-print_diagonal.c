#include "main.h"

/**
 * print_diagonal - check main
 * @n: input number of times to print '\'
 *
 * Return: a digonal line.
 */
void print_diagonal(int n)
{
	int A, B;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (A = 1; A <= n; A++)
		{
			for (B = 2; B <= A; A++)
			{
				_putchar(' ');
			}
			_putchar('\\');
		}
	}
	_putchar('\n');
}
