#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten x
 */

void more_numbers(void)
{
	int i;
	int n;

	for (i = 0; i <= 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
