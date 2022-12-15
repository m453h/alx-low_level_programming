#include "main.h"

/**
 * print_numbers- 0 to 9 - Display integers from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int integer;

	for (integer = '0'; integer <= '9'; integer++)
	{
		_putchar(integer);
	}

	_putchar('\n');
}
