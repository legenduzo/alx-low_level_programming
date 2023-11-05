#include "hash_tables.h"

/**
 * shash_table_create - creates sorted hash tables
 * @size: size of the array
 *
 * Return: null or hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = NULL;
	unsigned long int i;

	if (size < 1)
		return (NULL);

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);

	ht->array = malloc(size * sizeof(shash_node_t *));
	if (!(ht->array))
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;

	ht->size = size;

	return (ht);
}

/**
 * slist_insert - inserts node in a sorted linked list
 * @node: node to insert
 * @h: head of the linkedlist
 * @t: tail of the linkedlist
 */

void slist_insert(shash_node_t *node, shash_node_t **h, shash_node_t **t)
{
	shash_node_t *temp;

	if (!node || !h || !t)
		return;

	if (!(*h) || strcmp(node->key, (*h)->key) < 0)
	{
		node->snext = *h;
		if (*h)
			(*h)->sprev = node;
		else
			*t = node;
		*h = node;
		return;
	}

	temp = *h;
	while (temp->snext)
	{
		if (strcmp(node->key, temp->snext->key) == 0)
		{
			temp->snext->value = node->value;
			return;
		}
		else if (strcmp(node->key, temp->snext->key) < 0)
		{
			node->sprev = temp;
			node->snext = temp->snext;
			temp->snext->sprev = node;
			temp->snext = node;
			return;
		}
		temp = temp->snext;
	}
	temp->snext = node;
	node->sprev = temp;
	*t = node;
}
/**
 * shash_table_set - sets a value in a sorted hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value
 *
 * Return: 1 on success, 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node, *temp;

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

	node = malloc(sizeof(shash_node_t));
	if (!node)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[index];
	ht->array[index] = node;
	node->sprev = NULL;
	node->snext = NULL;
	slist_insert(node, &ht->shead, &ht->stail);

	return (1);
}

/**
 * shash_table_get - retrieves the value of key
 * @ht: hash table
 * @key: key to use
 *
 * Return: the value or null
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
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
 * shash_table_print - prints hash_table
 * @ht: the hash table to print
 */

void shash_table_print(const shash_table_t *ht)
{
	int flag = 0;
	char *key;
	char *value;
	shash_node_t *temp;

	if (!ht)
		return;

	temp = ht->shead;

	printf("{");
	while (temp)
	{
		if (flag)
			printf(", ");
		key = temp->key;
		value = temp->value;
		printf("'%s': '%s'", key, value);
		temp = temp->snext;
		flag = 1;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes hash tables
 * @ht: the hash table to delete
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *temp;

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
 * shash_table_print_rev - print the reverse sorted list
 * @ht: the hash table
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	int flag = 0;
	char *key;
	char *value;
	shash_node_t *temp;

	if (!ht)
		return;

	temp = ht->stail;

	printf("{");
	while (temp)
	{
		if (flag)
			printf(", ");
		key = temp->key;
		value = temp->value;
		printf("'%s': '%s'", key, value);
		temp = temp->sprev;
		flag = 1;
	}
	printf("}\n");
}
