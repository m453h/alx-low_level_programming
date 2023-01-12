#include "main.h"
#include "stdlib.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: the size of the memory to allocate
 *
 * Return: pointer to the memory allocated
 */
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);

	if (c == NULL)
		exit(98);

	return (c);
}
