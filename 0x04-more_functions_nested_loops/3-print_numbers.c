#include "main.h"

/**
 * print_numbers 0 to 1 - Display integers from 0 to 1
 *
 * Return: void
 */
void print_numbers(void)
{
	int integer;

	for (integer = 0; integer < 10; integer++)
	{
		_putchar(integer+ '0');
	}

	_putchar('\n');
}
