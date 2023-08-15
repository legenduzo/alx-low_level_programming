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
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (!new_dog)
		return (NULL);

	new_dog->name = malloc(strlen(name) + 1);

	if (!new_dog->name)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(strlen(owner) + 1);

	if (!new_dog->owner)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	strncpy(new_dog->name, name, strlen(name) + 1);
	new_dog->age = age;
	strncpy(new_dog->owner, owner, strlen(owner));

	return (new_dog);
}
