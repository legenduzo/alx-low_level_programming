#include "main.h"

/* Prints a sign depending on the value provided */

/**
 * print_sign - Prints a sign from +, 0, 1
 * @n: number to be passed in
 *
 * Return: 0,1 or -1 depending on the result
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
