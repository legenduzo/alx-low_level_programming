#include "main.h"

/**
 * wildcmp - wildcard permitted comparison of 2 strings
 * @s1: first string
 * @s2: second string
 *
 * Return: int
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, s2 + 1));
	}

	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1))
			return (1);
		if (*s1 && wildcmp(s1 + 1, s2))
			return (1);
	}
	return (0);
}
