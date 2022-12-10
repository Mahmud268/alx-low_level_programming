#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char law;

	for (law = 'z'; law >= 'a'; law--)
		putchar(law);
	putchar('\n');

	return (0);
}
