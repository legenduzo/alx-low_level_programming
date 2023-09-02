#include "main.h"

/**
 * get_bit - gets the bit at a given position
 * @n: the int to check
 * @index: The index to get the bit from
 *
 * Return: value of the bit at index or -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	 unsigned int mask;

	if (index >= sizeof(n) * 8)
		return (-1);

	mask = 1UL << index;

	bit = (mask & n) >> index;

	return (bit);
}
