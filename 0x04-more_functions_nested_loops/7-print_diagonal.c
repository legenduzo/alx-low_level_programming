#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: Number of times the character '\' should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	int spaces;

	while (n > 0)
	{
		spaces = n - 1;
		while (spaces > 0)
		{
			_putchar(' ');
			spaces--;
		}
		_putchar('\\');
		_putchar('\n');
	}
}
