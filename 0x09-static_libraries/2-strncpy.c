#include "main.h"

/**
 * _strncpy - copies up to n byte to dest
 * @dest: pointer to copy to
 * @src: pointer to copy to
 * @n: the number of strings to copy
 *
 * Return: char pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	if (i < n)
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}

	return (dest);
}
