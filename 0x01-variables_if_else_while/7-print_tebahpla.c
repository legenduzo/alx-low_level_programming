#include <stdio.h>

/* This function prints z-a and \n */

/**
 * main - the entry point
 * Description: prints z-a and \n
 *
 * Return: 0 - success
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
