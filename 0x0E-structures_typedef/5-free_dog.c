#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated for dog instances
 * @d: pointer to dog instance
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
