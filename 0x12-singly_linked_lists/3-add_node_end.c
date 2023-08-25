#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: double pointer to the start of the list
 * @str: string to be duplicated into the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *str_copy;
	int str_len;
	list_t *new_node;
	list_t *last_node;

	str_len = 0;
	while (str[str_len])
		str_len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	str_copy = strdup(str);
	if (str_copy == NULL)
	{
	free(new_node);
		return (NULL);
	}

	new_node->str = str_copy;
	new_node->len = str_len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;

		while (last_node->next)
			last_node = last_node->next;

		last_node->next = new_node;
	}

	return (new_node);
}
