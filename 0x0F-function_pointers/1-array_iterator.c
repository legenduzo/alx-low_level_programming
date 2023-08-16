#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - iterates over an array of size and performs action
 * @array: array
 * @size: size of array
 * @action: callback function that executes action
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action || size == 0)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
