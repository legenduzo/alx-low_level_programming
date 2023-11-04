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
	hash_node_t *head;
	hash_node_t *node;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	head = ht->array[index];
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->key = key;
	node->value = strdup(value);
	node->next = head;
	head = node;

	return (1);
}
