#include "hash_tables.h"

/**
 * key_index - function used to get the index of a string
 * @key: the string
 * @size: size of the hash table
 *
 * Return: index of the string on the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	if (!key || size == 0)
		return (0);

	i = hash_djb2(key) % size;

	return (i);
}
