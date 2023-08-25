#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints a single linked list
 * @h: pointer to the list to print
 *
 * Return: size of list printed
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	if (!h)
	{
		printf("[0] (nil)");
		return (0);
	}
	while (h != NULL)
	{
		if (!h->str)
			printf("[0] (nil)");
		else
			printf("[%zu] %s\n", h->len, h->str);
		h = h->next;
		n += 1;
	}
	return (n);
}
