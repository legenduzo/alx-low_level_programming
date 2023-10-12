#ifndef _LISTS_H_
#define _LISTS_H_

#include <stddef.h>

/**
 * struct node - doubly linked list
 * @n: size_t
 * @next: points to the next node
 * @prev: points to the previous node
 *
 * Description: doubly linked list node structure
 */

typedef struct node
{
	size_t n;
	struct node *prev;
	struct node *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif /* _LISTS_H_ */
