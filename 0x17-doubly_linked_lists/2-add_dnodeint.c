#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a node to the head of a doubly linked list
 * @head: head pointer
 * @n: content of the linked list
 *
 * Return: new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	if (*head)
	{
		new->next = *head;
		(*head)->prev = new;
	}
	else
		new->next = NULL;
	*head = new;

	return (new);
}
