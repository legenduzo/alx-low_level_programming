#include "main.h"

/**
 * prime_finder - checks for prime
 * @n: number
 * @d: divisor
 *
 * Return: int
 */

int prime_finder(int n, int d)
{
	if ((d * d) > n)
		return (1);

	if ((n % d) == 0)
		return (0);

	return (prime_finder(n, (d + 1)));
}

/**
 * is_prime_number - check for prime
 * @n: number
 *
 * Return: int
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (prime_finder(n, 2));
}
