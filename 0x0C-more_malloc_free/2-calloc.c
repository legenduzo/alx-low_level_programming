#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of members
 * @size: size of each member
 *
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(size * nmemb);

	if (s == NULL)
		return (NULL);

	p = s;

	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)p + i) = 0;
	}

	return (s);
}
