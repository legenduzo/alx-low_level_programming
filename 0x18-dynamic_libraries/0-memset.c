#include "main.h"

/**
 * _memset - fills the memory with a constant byte
 * @s: pointer to the memory area where that is to be filled
 * @b: constant byte to fill the memory area with
 * @n: how many bytes to print
 *
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *p = s;

	for (i = 0; i < n; i++)
	{
		*p++ = b;
	}
	return (s);
}
