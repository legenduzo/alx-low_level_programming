#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print a doubly linked list
 * @h: header pointer
 *
 * Return: size of linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	if (!h)
		return (n);

	while (h)
	{
		n += 1;
		printf("%lu\n", h->n);
		h = h->next;
	}
	return (n);
}
