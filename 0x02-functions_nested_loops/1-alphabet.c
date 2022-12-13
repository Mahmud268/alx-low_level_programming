#include "main.h"
/**
 * print _alphabets - All in lower case
 *
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	char alphabets;

	for (alphabets ='a'; alphabets <= 'z'; alphabets++)
	{
		_putchar(alphabets);
	}

	_putchar('\n');
}
