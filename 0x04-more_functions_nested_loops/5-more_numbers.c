#include "main.h"

/**
 * more_numbers - check main
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i, m;

	for (m = 0; m < 10; m++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}

			_putchar((m % 10) + '0');
		}
		_putchar('\n');
	}
}
