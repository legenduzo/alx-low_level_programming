#include "main.h"
/* Prints the last digit of a number */

/**
 * print_last_digit - does as its name says
 * @n: number to extract last digit from
 *
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int last_digit = (_abs(n) % 10);

	_putchar(last_digit + '0');
	return (last_digit);
}
