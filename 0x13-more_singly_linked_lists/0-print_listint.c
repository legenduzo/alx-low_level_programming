#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/*
 * print_listint - prints all items in a singly linked list
 * @h: pointer to head
 *
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	if (!h)
		return (n);

	do
	{
		printf("%u\n", h->n);
		h = h->next;
		n += 1;
	} while (h != NULL);

	return (n);
}
