#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search
 * @size: size of the array
 * @cmp: comparison function
 *
 * Return: int on success or -1 for failure
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, n = 0;

	if (!array || !cmp || size < 1)
		return (-1);

	for (i = 0; i < size; i++)
	{
		n = cmp(array[i]);

		if (n > 0)
			return (i);
	}

	return (-1);
}
