#include "lists.h"

/**
 * listint_len - checks length of a linked list
 * @h: pointer to the linked list
 *
 * Return: size_t
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	if (!h)
		return (0);

	while (h->next)
	{
		n += 1;
		h = h->next;
	}

	return (++n);
}
