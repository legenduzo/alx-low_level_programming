#include "hash_tables.h"

/**
 * hash_table_set - sets a value in a hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value
 *
 * Return: 1 on success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	if (!(node->key) || !(node->value))
	{
		free(node);
		return (0);
	}

	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
