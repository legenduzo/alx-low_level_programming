#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - finds the largest prime factor of a number
 * Return: The largest prime factor of the number
 */

long int largest_prime_factor(long int n)
{
	long int i;

	while (n % 2 == 0)
	{
		n = n / 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	}
	return (n);
}
