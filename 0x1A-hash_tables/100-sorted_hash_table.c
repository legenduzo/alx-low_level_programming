#include "hash_tables.h"

/**
 * shash_table_create - creates hash tables
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
	hash_node_t *node, *temp;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (!(temp->value))
				return (0);
			return (1);
		}
		temp = temp->next;
	}

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

	while (ht->array[index])
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			value = ht->array[index]->value;
			return (value);
		}
		ht->array[index] = ht->array[index]->next;
	}
	return (NULL);
}

/**
 * hash_table_print - prints hash_table
 * @ht: the hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	char *key, *value;
	hash_node_t *node, *temp;
	int flag = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			node = temp;
			temp = temp->next;
			if (flag)
				printf(", ");

			key = node->key;
			value = node->value;
			if (temp && !flag)
				printf("'%s': '%s', ", key, value);
			else
				printf("'%s': '%s'", key, value);
			flag = 1;
		}
	}
	printf("}\n");
}

/**
 * hash_table_delete - deletes hash tables
 * @ht: the hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			temp = ht->array[i];
			ht->array[i] = ht->array[i]->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
		free(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}

/**
 * TODO:
 * shash_table_print_rev
 */
