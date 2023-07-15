#include <stdio.h>

/* This function prints a-z and a \n */

/**
 * main - the entry point
 * Description: prints a-z and \n
 *
 * Return: 0 - success
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
