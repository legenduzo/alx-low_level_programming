#include <stdio.h>

/* This function prints base 16 digits and \n */

/**
 * main - the entry point
 * Description: prints base 16 digits and \n
 *
 * Return: 0 - success
 */

int main(void)
{
	int i;

	for (i = 0x0; i <= 0xF; i++)
	{
		if (i < 10)
		{
			putchar(i + '0');
		}
		else
		{
			putchar(i + 'a' - 10);
		}
	}
	putchar('\n');

	return (0);
}
