#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: size of the array
 * @c: what to fill the array with
 *
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array = malloc(sizeof(char) * size);
	char *p = array;

	if (size == 0)
		return (NULL);

	while (i++ < size)
	{
		if (p != NULL)
			*p++ = c;
	}

	return (array);
}
