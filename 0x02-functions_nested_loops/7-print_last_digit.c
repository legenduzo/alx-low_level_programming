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
	int last_digit = (n % 10) + '0';

	_putchar(last_digit);
	return (last_digit);
}
