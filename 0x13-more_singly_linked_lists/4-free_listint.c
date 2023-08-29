#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a linked list
 * @head: pointer to the head
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (head)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
	free(head);
}
