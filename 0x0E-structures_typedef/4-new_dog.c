#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog instance
 * @name: dog name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: dog_t pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int n, o;
	char *name_copy;
	char *owner_copy;

	n = strlen(name) + 1;
	o = strlen(owner) + 1;

	dog = malloc(sizeof(dog_t));

	if (!dog)
		return (NULL);

	dog->name = name;

	name_copy = malloc(n);

	if (!name_copy)
	{
		free(dog);
		return (NULL);
	}
	strncpy(name_copy, name, n);

	dog->age = age;

	dog->owner = owner;

	owner_copy = malloc(o);

	if (!owner_copy)
	{
		free(dog);
		free(name_copy);
		return (NULL);
	}

	strncpy(owner_copy, owner, o);

	return (dog);
}
