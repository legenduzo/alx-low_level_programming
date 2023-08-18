#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all arguments passed
 * @n: number of arguments to be passed
 *
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, j;
	int k = 0;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(args, int);
		k = k + j;
	}

	va_end(args);

	return (k);
}
