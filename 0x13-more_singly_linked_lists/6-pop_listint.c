#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - removes a linked list from the beginning
 * @head: pointer to list
 *
 * Return: value of popped list element
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *firstnode;

	if (!head || !(*head)->n)
		return (0);

	firstnode = *head;
	*head = (*head)->next;
	data = firstnode->n;
	free(firstnode);
	return (data);
}
