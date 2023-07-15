#include <stdio.h>

/* Function prints the smallest combo of 3 numbers */

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
	int k;

	for (i = 0; i <= 7; i++)
	{
		for (n = i + 1; n <= 8; n++)
		{
			for (k = n + 1; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(n + '0');
				putchar(k + '0');

				if (i != 7 || n != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
