#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array and fills it from min to max
 * @min: The minimum value to fill it with
 * @max: The max to fill with (inclusive)
 *
 * Return: int pointer
 */

int *array_range(int min, int max)
{
	int *s, *p;
	int i, size;

	if (min > max)
		return (NULL);

	size = 1 + (max - min);

	s = malloc(size * sizeof(int));

	if (s == NULL)
		return (NULL);

	p = s;

	for (i = min; i <= max; i++)
		*p++ = i;

	return (s);
}
