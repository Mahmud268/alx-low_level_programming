#include "main.h"
#include <stdio.h>
int is_divisible(int num, int div);

/**
 * is_prime_number - check main
 * @n: input interger
 * Return: 1 if n is a prime number or 0 otherwise
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (is_divisible(n, div));
}
