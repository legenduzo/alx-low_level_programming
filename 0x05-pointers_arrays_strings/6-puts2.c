#include "main.h"

/**
 * puts2 - skips a character
 * @str: item to change
 *
 * Return: nothing
 */

void puts(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
		j++;
	}
	_putchar('\n');
}
