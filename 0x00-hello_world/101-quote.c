#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints out the lastpart of a qoute in the standard error.
 *
 * Return: 1 if successe.
 */

int main(void)
{
	write(2, " and that piece of art is useful - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
