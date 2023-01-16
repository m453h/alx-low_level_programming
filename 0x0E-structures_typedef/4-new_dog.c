#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates new dog struct
 *
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner of the dog
 *
 * Return: (dog_t) - dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}

