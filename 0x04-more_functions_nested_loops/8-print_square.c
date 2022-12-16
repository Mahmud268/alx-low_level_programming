#include "main.h"

/**
 * print_square - check main
 * @size: size of the squre
 * Return: A squre made of #
 */

void print_square(int size)
{
	int L, B;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
		for (L = 1; L <= size; L++)
		{
			_putchar('#');

			for (B = 2; B <= size; B++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
}
