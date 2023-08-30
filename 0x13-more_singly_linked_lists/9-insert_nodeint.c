#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - explanatory
 * @head: pointer to linked list
 * @idx: index to insert
 * @n: node element
 *
 * Return: pointer or null
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *temp;
	unsigned int count = 0;

	if (!head)
		return (NULL);


	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	temp = *head;

	while (temp && ++count)
	{
		if (count == idx)
		{
			node->next = temp->next;
			temp->next = node;
			return (node);
		}
		temp = temp->next;
	}
	free(node);
	return (NULL);
}
