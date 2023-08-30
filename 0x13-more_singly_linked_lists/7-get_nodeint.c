#include "lists.h"

/**
 * get_nodeint_at_index - quite explanatory
 * @head: head
 * @index: index
 *
 * Return: pointer or null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (!head)
		return (NULL);
	while (head)
	{
		if (count == index)
			return (head);
		count += 1;
		head = head->next;
	}

	if (count == index)
		return (head);
	else
		return (NULL);
}
