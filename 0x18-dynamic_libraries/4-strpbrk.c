#include "main.h"

/**
 * _strpbrk - searches for first occurence in string
 * @s: string to search
 * @accept: search value
 *
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		a = accept;
		while (*a)
		{
			if (*a++ == *s)
			{
				return (s);
			}
		}
		++s;
	}
	return ((char *)0);
}
