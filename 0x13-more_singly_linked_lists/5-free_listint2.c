#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the head
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *n = *head;

	while (n)
	{
		n = n->next;
		free(temp);
		temp = n;
	}
	free(n);
	*head = NULL;
}
