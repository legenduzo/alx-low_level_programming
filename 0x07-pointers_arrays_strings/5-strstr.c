#include "main.h"

/**
 * _strstr - finds a string in a str
 * @haystack: the string to search in
 * @needle: the string to search for
 *
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	b = needle;

	if (*b == 0)
		return (haystack);

	for (; *haystack; haystack++)
	{
		if (*haystack != *b)
			continue;
		a = haystack;
		while (1)
		{
			if (*b == 0)
				return (haystack);
			if (*a++ != *b++)
				break;
		}
		b = needle;
	}
	return ((char *)0);
}
