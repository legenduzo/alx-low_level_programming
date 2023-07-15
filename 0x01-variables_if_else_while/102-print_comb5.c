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
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (n = j + i; n <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((i % 10) + '0');

			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			
			}
		}
	}
	putchar('\n');

	return (0);
}
