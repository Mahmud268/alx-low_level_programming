#include "main.h"

/**
 * _puts - check main
 * @str - the input value to be checked
 * 
 * Return: string
 */
void _puts(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
