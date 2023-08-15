#include "dog.h"

/**
 * init_dog - simply initializes the dog struct
 * @d: the struct
 * @name: its name
 * @age: its age
 * @owner: its owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
