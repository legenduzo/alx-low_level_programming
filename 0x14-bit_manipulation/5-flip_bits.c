#include "main.h"

/**
 * flip_bits - tells the number of bits to be flipped to equate 2 numbers
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	unsigned int count = 0;

	if (n == m)
		return (0);

	diff = n ^ m;
	
	while (diff)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}
