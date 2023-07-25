#include "main.h"

/* Swaps values */

/**
 * swap_int - swaps ints
 * @a: first int
 * @b: second int
 *
 * Return: nothing
 */

void swap_int(int *a, int *b);
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
