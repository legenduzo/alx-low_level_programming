#include "main.h"

/**
 * clear_bit - turn the bit at index to 0
 * @n: pointer to the number
 * @index: index
 *
 * Return: 1 on success, -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(*n) * 8)
		return (-1);

	mask = ~(1UL << index);

	*n = *n & mask;

	return (1);
}
