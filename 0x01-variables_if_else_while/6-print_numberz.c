#include <stdio.h>

/* This function prints single digits and \n */

/**
 * main - the entry point
 * Description: prints 0-9 and \n
 *
 * Return: 0 - success
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
