#include "main.h"

/**
 * _sqrt_recursion - check main
 * @n: an input interger
 * Return: the squre root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(1, n));
}

/**
 * _sqrt - find squre root
 * @prev: previous value
 * @root: squre root value
 * Return: the squre root
 */

