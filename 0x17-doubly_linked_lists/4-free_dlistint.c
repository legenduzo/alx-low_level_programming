#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: head pointer
 */

void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
