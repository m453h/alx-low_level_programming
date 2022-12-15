#include "main.h"

/**
 * print_diagonal- draw diagonal line on the screen
 * @n: the control character for the length of the underscore
 * should be displayed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	i = 0;

	do {
		for (j = 1; j <= i; j++)
		{
			_putchar(' ');
		}

		if (n > 0)
		{
			_putchar('\\');
		}

		_putchar('\n');

		i++;
	} while (i < n);
}
