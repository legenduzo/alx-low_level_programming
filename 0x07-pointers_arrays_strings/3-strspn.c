#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: prefix to check
 *
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	char *s1 = s;
	char *c;

	while (*s)
	{
		for (c = accept; *c; c++)
		{
			if (*s == *c)
			{
				break;
			}
		}
		if (*c == '\0')
		{
			break;
		}
		s++;
	}
	return (s - s1);
}
