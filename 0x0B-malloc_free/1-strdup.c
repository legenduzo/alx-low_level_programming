#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Creates a string duplicate
 * @str: string to duplicate
 *
 * Return: pointer to the new string
 */

char *_strdup(char *str)
{
	size_t stln;
	char *s;
	char *p;

	if (str == NULL)
		return (NULL);

	stln = strlen(str);

	s = malloc(sizeof(char) * (stln + 1));
	p = s;

	if (p == NULL)
		return (NULL);

	while (*str != '\0')
	{
		*p++ = *str++;
	}
	*p = '\0';

	return (s);
}
