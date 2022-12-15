#include "main.h"

/**
 * print_triangle- draw triangle on the screen
 * @size: the control character for the height of the
 * triangle to be displayed
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	i = 1;

	do {
		for (j = 1; j <= size; j++)
		{
			if (j > size - i)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}

		_putchar('\n');

		i++;

	} while (i <= size);
}
