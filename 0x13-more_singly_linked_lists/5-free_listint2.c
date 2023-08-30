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
	listint_t *temp;

	if (!head)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
