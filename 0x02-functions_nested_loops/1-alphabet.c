#include "main.h"

/* Prints a-z to std1 and \n */

/**
 * print_alphabet - prints a-z
 *
 * Return: return type is void
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
