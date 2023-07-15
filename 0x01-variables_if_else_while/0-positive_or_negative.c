#include <stdlib.h>
#include <time.h>

/* This function should print if n is + or - or 0 */

/**
 * main - The entry point of the function
 * Description: checks if the random number generated is +/- or 0
 *
 * Return: function returns 0 (always success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	else
		printf("%d is zero", n);

	return (0);
}
