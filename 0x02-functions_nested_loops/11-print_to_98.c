#include <stdio.h>
/* Prints n to 98 */

/**
 * print_to_98 - prints
 * @n: number to start from
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
