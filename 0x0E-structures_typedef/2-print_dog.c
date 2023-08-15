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
		printf("nil");
	else
		printf("Name: %s\n", d->name);

	if (!d->age)
		printf("nil");
	else
		printf("Age: %f\n", d->age);

	if (!d->owner)
                printf("nil");
        else
                printf("Owner: %s\n", d->owner);
}
