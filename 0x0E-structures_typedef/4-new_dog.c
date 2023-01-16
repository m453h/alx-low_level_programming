#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - calculates the length of a string
 *@s: The input string used to determine length
 *
 *  Return: (int) length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * allocate_str - dynamically allocates space for a string
 * @str: The string to dynamically allocate space for
 *
 * Return: (char*) - pointer to the first char of a string
 */
char *allocate_str(char *str)
{
	char *s = malloc(sizeof(char) * (_strlen(str) + 1));

	if (s == NULL)
		return (NULL);

	s = str;

	return (s);
}


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
	dog_t *d;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = allocate_str(name);

	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = allocate_str(owner);

	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->age = age;

	return (d);
}

