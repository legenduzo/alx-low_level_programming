#include "hash_tables.h"

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
