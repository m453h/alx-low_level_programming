#include "main.h"

/**
 * print_numbers 0 to 1 - Display integers from 0 to 1
 *
 * Return: void
 */
void print_numbers(void)
{
	char integer;

	for (integer = '0'; integer <= '9'; integer++)
	{
		_putchar(integer);
	}

	_putchar('\n');
}
