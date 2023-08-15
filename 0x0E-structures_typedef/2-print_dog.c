#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints dog's attributes
 * @d: the struct
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;

	if (!d->name)
		printf("Name: nil\n");
	else
		printf("Name: %s\n", d->name);

	if (!d->age)
		printf("Name: 0\n");
	else
		printf("Age: %f\n", d->age);

	if (!d->owner)
		printf("Name: nil\n");
	else
		printf("Owner: %s\n", d->owner);
}
