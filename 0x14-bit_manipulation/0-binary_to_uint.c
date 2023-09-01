#include <string.h>
#include "main.h"

/**
 * binary_to_uint - converts bits to decimals
 * @b: pointer to the string to convert
 *
 * Return: 0 on failure, int on success
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		n = n * 2 + (b[i] - '0');
	}
	return (n);
}
