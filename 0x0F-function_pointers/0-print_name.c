#include "function_pointers.h"
#include <stdlib.h>

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
	f(name);
}
