#include "main.h"

/**
 * main - print _putchar
 * is written by me
 * Return: 0 (Success)
 */

int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}
