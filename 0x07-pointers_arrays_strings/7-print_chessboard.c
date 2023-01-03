#include "main.h"

/**
 * print_chessboard - check main
 * @a: array od pieces
 *
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int d, b;

	for (d = 0; d < 8; d++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[b][d]);
		}

		_putchar('\n');
	}
}
