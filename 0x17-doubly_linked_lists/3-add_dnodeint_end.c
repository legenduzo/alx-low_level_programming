#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end
 * @head: pointer to the head
 * @n: node value
 *
 * Return: NULL or new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end;
	dlistint_t *temp;

	if (!head)
		return (NULL);

	end = malloc(sizeof(dlistint_t));
	if (!end)
		return (NULL);

	if (!(*head))
	{
		end->n = n;
		end->next = NULL;
		end->prev = NULL;
		*head = end;
		return (end);
	}
	else
	{
		temp = *head;

		while (temp->next)
			temp = temp->next;

		end->n = n;
		end->next = NULL;
		end->prev = temp;
		temp->next = end;

		return (end);
	}
}
