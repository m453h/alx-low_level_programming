#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - copies the string pointed to another buffer
 *
 * @src: The origin buffer to be copied
 * @dest: The destination buffer
 *
 * Description: this function copies the string pointed
 * by src, including the termination null byte \0, to
 * the buffer pointed to by dest
 *
 * Return: (char *dest) pointer to copy destination
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;

	while (src[length] != '\0')
	{
		dest[length] = src[length];
		length++;
	}

	dest[length] = '\0';

	return (dest);
}

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

	d->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->name = _strcpy(d->name, name);
	d->owner = _strcpy(d->owner, owner);
	d->age = age;

	return (d);
}

