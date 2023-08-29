#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints the element of a linked list
 * @h: pointer to the header
 *
 * Return: sizw_t
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	if (!h)
		return (0);

	while (h->next != NULL)
	{
		printf("%u\n", h->n);
		h = h->next;
		n += 1;
	}
	printf("%u\n", h->n);

	return (++n);
}
