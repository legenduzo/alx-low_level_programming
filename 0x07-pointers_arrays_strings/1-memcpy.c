#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: where to copy to
 * @src: where to copy from
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n-- > 0)
	{
		*p++ = *src++;
	}

	return (dest);
}
