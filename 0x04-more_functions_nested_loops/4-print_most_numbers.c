#include "main.h"

/**
 * print_most_numbers- Display integers from 0 to 9 excluding 2, 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int integer;

	for (integer = 0; integer <= 9; integer++)
	{
		if (integer != 2 && integer != 4)
			_putchar(integer + '0');
	}

	_putchar('\n');
}
