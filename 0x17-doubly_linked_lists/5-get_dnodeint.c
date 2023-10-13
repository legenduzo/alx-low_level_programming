#include "lists.h"

/**
 * get_dnodeint_at_index - gets index of a node
 * @head: head pointer
 * @index: index of node to get
 *
 * Return: NULL or node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head)
	{
		if (index == n)
			return (head);
		head = head->next;
		n++;
	}
	return (NULL);
}
