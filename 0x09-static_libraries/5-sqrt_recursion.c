#include "main.h"

/**
 * find_sqrt - Helper
 * @low: low bound for binary search
 * @high: upper bound
 * @n: the number
 *
 * Return: int
 */

int find_sqrt(int low, int high, int n)
{
	int mid = low + (high - low) / 2;
	long int square = (long int) mid * mid;

	if (low > high)
		return (-1);

	if (square == n)
		return (mid);

	if (square > n)
		return (find_sqrt(low, mid - 1, n));

	return (find_sqrt(mid + 1, high, n));
}

/**
 * _sqrt_recursion - returns sqrt
 * @n: number to find its sqrt
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (find_sqrt(1, n, n));
}
