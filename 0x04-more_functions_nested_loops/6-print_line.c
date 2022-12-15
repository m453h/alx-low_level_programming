#include "main.h"

/**
 * print_line- display underscore character n times
 * @n: the number of times the underscore character
 * should be displayed
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
