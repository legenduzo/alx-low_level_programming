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

	for (i = 0; i <= 8; i++)
	{
		for (n = i + 1; n <= 9; n++)
		{
			putchar(i + '0');
			putchar(n + '0');

			if (i != 8 || n != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
