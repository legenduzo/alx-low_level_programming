#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concats n letters of s2 to s1
 * @s1: dest
 * @s2: src
 * @n: number of s2 to concat
 *
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int space;
	unsigned int a;
	char *s;
	char *p;
	unsigned int i;
	unsigned int b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = 1 + strlen(s2);
	b = 1 + strlen(s1);

	if (n >= a)
		space = a;
	else
		space = n;

	s = malloc(space + b);

	if (s == NULL)
		return (NULL);

	 p = s;

	while (*s1)
		*p++ = *s1++;

	for (i = 0; i < space; i++)
		*p++ = *s2++;

	*p = '\0';

	return (s);
}
