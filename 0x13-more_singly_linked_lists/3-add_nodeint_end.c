#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: pointer to the linked list
 * @n: The element to add to the list
 *
 * Return: address of the new node or null
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	temp = *head;

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
