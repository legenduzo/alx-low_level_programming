#include "hash_tables.h"

/**
 * hash_table_create - creates hash tables
 * @size: size of the array
 *
 * Return: null or hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;
	unsigned long int i;

	if (size < 1)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);

	ht->array = malloc(size * sizeof(hash_node_t *));
	if (!(ht->array))
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	ht->size = size;

	return (ht);
}
