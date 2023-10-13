#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - does what its name says
 * @h: pointer to head
 * @idx: index to insert
 * @n: value of node
 *
 * Return: new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node;
	dlistint_t *temp;
	unsigned int loc = 0;

	if (!h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	temp = *h;

	while (temp)
	{
		if (loc == idx - 1)
		{
			node->next = temp->next;
			node->prev = temp;
			if (temp->next)
				temp->next->prev = node;
			temp->next = node;
			return (node);
		}
			loc++;
			temp = temp->next;
	}
	free(node);
	return (NULL);
}
