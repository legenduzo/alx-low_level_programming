#include "main.h"

/* Prints a-z ten times to std1 and \n */

/**
 * print_alphabet_x10 - prints a-z ten times
 *
 * Return: return type is void
 */

void print_alphabet_x10(void)
{
	int i;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
