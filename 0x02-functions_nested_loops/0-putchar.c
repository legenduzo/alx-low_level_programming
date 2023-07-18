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

	for (int i = 0; putchar_string[i] != '\0'; i++)
	{
		_putchar(putchar_string[i]);
	}
	_putchar('\n');

	return (0);
}

/* This function returns one character per time */

/**
 * _putchar - returns putchar
 * @c: takes an argument of type char
 *
 * Return: int
 */

int _putchar(char c)
{
	return (putchar(c));
}
