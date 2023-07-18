#include "main.h"

/* Prints a-z ten times to std1 and \n */

/**
 * print_alphabets - prints a-z
 *
 * Return: return type is void
 */

void print_alphabets(void)
{
	int i;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	}

	_putchar('\n');
}
