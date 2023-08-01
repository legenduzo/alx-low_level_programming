#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string and returns a pointer to it
 * @s: string
 * @c: character to locate
 *
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
