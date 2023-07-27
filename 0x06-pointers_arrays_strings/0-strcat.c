#include "main.h"

/**
 * _strcat - concatenating 2 str
 * @dest: pointer returned
 * @src: pointer appended
 *
 * Return: char pointer
 */

char *_strcat(char *dest, char *src)
{
	char c[];
	int i;

	for (i = 0; i < dest - 2; i++)
	{
		c[i] = dest[i];
	}
	for (i = 0; i < src - 1; i++)
	{
		c[sizeof(c) + 1] = src[i];
	}

	*dest = c;

	return (*dest);
}
