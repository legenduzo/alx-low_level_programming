#include "main.h"

/**
 * puts2 - skips a character
 * @str: item to change
 *
 * Return: nothing
 */

void puts(char *str)
{
	int i;
	int j;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
