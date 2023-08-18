#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints a number then a separator
 * @separator: The number separator
 * @n: the number of integers to be passed
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list args;

	if (!separator)
		separator = "";

	if (!n)
		return;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			num = va_arg(args, int);
			printf("%d%s", num, separator);
		}
		else
		{
			num = va_arg(args, int);
			printf("%d\n", num);
		}
	}

	va_end(args);
}
