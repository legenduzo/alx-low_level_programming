#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - add a node at the beginning of the list_t list
 * @head: pointer to the head of the list
 * @str: string to be included in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int length = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str  = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[length])
		length++;

	new_node->len = length;

	new_node->next = (*head);

	(*head) = new_node;

	return (new_node);
}
