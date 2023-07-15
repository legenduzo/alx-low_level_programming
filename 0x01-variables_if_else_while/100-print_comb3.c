#include <stdio.h>

/* Function prints the smallest combo of 2 numbers */

/**
 * main - entry
 * Description: prints a combo of numbers
 *
 * Return: 0 - success
 */

int main(void)
{
	int i;
	int n;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 9; n++)
		{
			if (i < n)
			{
				putchar((i * 10) + n + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
