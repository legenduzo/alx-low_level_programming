#include "main.h"

/**
 * factorial - calculates factorial
 * @n: number to get the factorial of
 *
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
