#include <stdio.h>
#include "main.h"

/* This function prints _putchar to the standard output */

/**
 * main - entry point
 * Description: prints putchar
 *
 * Return: return 0 - success
 */

int main(void)
{
	const char *putchar_string = "_putchar";
	int i;

	for (i = 0; putchar_string[i] != '\0'; i++)
	{
		_putchar(putchar_string[i]);
	}
	_putchar('\n');

	return (0);
}
