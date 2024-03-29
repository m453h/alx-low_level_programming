#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes dog struct
 *
 * @d: pointer to the dog struct to iniialize
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner of the dog
 *
 * Return: (void)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
