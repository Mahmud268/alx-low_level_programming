#include "main.h"

/**
 * print_last_digit - Check main
 * @r: An integer input
 * Description: This function prints the last digit
 * Return: last digit of number r
 */
int print_last_digit(int r)
{
	int b;

	if (r < 0)
		b = -1 * (r % 10);
	else
		b = r % 10;
	_putchar((b % 10) + '0');
	return (b % 10);
}
