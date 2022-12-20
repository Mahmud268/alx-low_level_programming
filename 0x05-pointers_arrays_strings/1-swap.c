#include "main.h"

/** swap_int - check main
 * @a: first input character
 * @b: second input character
 * Return: 1 0n success
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
