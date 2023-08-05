#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: Number of times the character '\' should be printed
 */

void print_diagonal(int n)
{
	int spaces, i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (spaces = 0; spaces < n; spaces++)
	{
		for (i = 0; i < spaces; i++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}
}
