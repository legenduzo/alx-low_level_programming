#include <stdio.h>

/* Function prints 1-9 separated by commas */

/**
 * main - entry point
 * Description: prints 0-9
 *
 * Return: 0 success
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
