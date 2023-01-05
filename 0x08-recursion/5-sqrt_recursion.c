#include "main.h"
int _sqrt(int prev, int root);

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
int _sqrt(int prev, int root)
{
	if (prev > root)
		return (-1);
	else if (prev * prev == root)
		return (prev);
	return (_sqrt(prev + 1, root));
}
