#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    char *value;
    unsigned long int index;
    int i = 0;

    ht = hash_table_create(1024);
    hash_table_set(ht, "Holberton", "is cool");
    value = hash_table_get(ht, "Holberton");
    printf("%s:%s\n", "Holberton", value);
    hash_table_set(ht, "Holberton", "is soooo cooool");
    value = hash_table_get(ht, "Holberton");
    printf("%s:%s\n", "Holberton", value);
    hash_table_set(ht, "Holberton", "is awesome");
    value = hash_table_get(ht, "Holberton");
    printf("%s:%s\n", "Holberton", value);

    index = key_index((unsigned char *)"Holberton", 1024);
    while (ht->array[index])
    {
	    printf("%d: %s\n", i, ht->array[index]->value);
	    ht->array[index] = ht->array[index]->next;
	    i++;
    }
    return (EXIT_SUCCESS);
}
