#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer or null
 */

char *str_concat(char *s1, char *s2)
{
	char *space;
	char *p;
	size_t len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = strlen(s1) + strlen(s2);

	space = malloc(sizeof(char) * (len + 1));

	if (space != NULL)
	{
		p = space;

		while (*s1 != '\0')
		{
			*p = *s1;
			p++;
			s1++;
		}
		while (*s2 != '\0')
		{
			*p = *s2;
			p++;
			s2++;
		}
	}
	*p = '\0';

	return (space);
}
