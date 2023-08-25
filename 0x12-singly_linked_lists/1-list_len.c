#include "lists.h"

/**
 * list_len - returns the length of the linked list
 * @h: linkedlist to check
 *
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n += 1;
		h = h->next;
	}
	return (n);
}
