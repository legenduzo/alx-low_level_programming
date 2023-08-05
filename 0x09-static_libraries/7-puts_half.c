#include "main.h"

/**
 * puts_half - writes the second half
 * @str: pointer of the word
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int j;
	int length = 0;
	int halfIndex = (length - 1) / 2 + 1;

	while (str[length] != '\0')
	{
		length++;
	}

	for (j = halfIndex; j < length; j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
