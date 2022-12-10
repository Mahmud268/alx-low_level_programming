#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int i;
	char my;
	
	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (my = 'a'; my <= 'f'; my++)
		putchar(my);
	putchar('\n');

	return (0);
}
