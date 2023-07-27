#include "main.h"

/**
 * _strncat - appemd n bytes to dest
 * @dest: where bytes should be appended to
 * @src: contains source of bytes
 * @n: number of chars to append
 *
 * Return: char pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest != '\0')
	{
		i++;
	}
	for (; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
