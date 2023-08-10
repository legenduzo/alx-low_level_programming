#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - checks and returns pointer
 * @b: int to create pointer for
 *
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	void *c = malloc(sizeof(b));

	if (c == NULL)
		exit(98);
	return (c);
}
