#include <stdio.h>
#include <math.h>

/**
 * main - finds the largest prime factor of a number
 *
 * Return: The largest prime factor of the number
 */

int main(void)
{
	long int i;
	long int n = 612852475143;

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
	printf("%ld\n", n);
	return (0);
}
