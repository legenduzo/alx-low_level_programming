#include "main.h"

/**
 * set_bit - sets the bit at an index to 1
 * @n: The number to manipulate
 * @index: the index to change
 *
 * Return: -1 or 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(*n) * 8)
		return (-1);

	mask = 1UL << index;

	*n = *n | mask;

	return (*n);
}
