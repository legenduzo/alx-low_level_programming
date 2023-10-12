#include "lists.h"

/**
 * dlistint_len - returns length of list
 * @h: header pointer
 *
 * Return: size_t
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	if (!h)
		return (n);

	while (h)
	{
		n += 1;
		h = h->next;
	}
	return (n);
}
