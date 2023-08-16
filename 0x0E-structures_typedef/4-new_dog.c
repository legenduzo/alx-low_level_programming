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

	n = strlen(name) + 1;
	o = strlen(owner) + 1;

	dog = malloc(sizeof(dog_t));

	if (!dog)
		return (NULL);

	dog->name = malloc(n);

	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}
	strncpy(dog->name, name, n);

	dog->age = age;

	dog->owner = malloc(o);

	if (!dog->owner)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	strncpy(dog->owner, owner, o);

	return (dog);
}
