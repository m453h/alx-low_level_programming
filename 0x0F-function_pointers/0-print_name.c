#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - function that prints name
 *
 * @name: the name to print
 * @f: pointer to a function that prints a name
 *
 * Return: (void)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
