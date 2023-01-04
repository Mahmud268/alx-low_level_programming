#include "main.h"

/**
 * _print_rev_recursion - check main
 * @s: the string character to be reversed
 *
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
