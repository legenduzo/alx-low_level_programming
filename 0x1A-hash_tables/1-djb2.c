#include "hash_tables.h"

/**
 * hash_djb2 - the hash function implementing the djb2 algorithm
 * written by daniel j. bernstein
 * hash = ((hash << 5) + hash) + c == (hash * 33) + c
 * @str: the string to hash
 *
 * Return: an unisgned long representation of the string or 0
 */

unsigned long hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	if (!str)
		return (0);

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;

	return (hash);
}
