#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints binary
 * @n: int to convert
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	mask = 1UL << ((sizeof(n) * 8) - 1);

	while (!(mask & n))
		mask >>= 1;

	while (mask)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');

		mask >>= 1;
	}
}
