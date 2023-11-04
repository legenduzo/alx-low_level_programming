#include "hash_tables.h"

/**
 * hash_table_get - retrieves the value of key
 * @ht: hash table
 * @key: key to use
 *
 * Return: the value or null
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value;
	unsigned long int index;

	if (!ht || !key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	
	if (index >= ht->size)
		return (NULL);

	if (!(ht->array[index]))
		return (NULL);

	value = ht->array[index]->value;
	return (value);
}
