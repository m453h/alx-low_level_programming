#include "main.h"

/**
 * print_square- draw square on the screen
 * @n: the control character for the length x width
 * of the square to be displayed
 *
 * Return: void
 */
void print_square(int n)
{
	int i, j;

	i = 0;

	do {
		for (j = 1; j <= n; j++)
		{
			if (n > 0)
			{
				_putchar('#');
			}
		}

		_putchar('\n');

		i++;

	} while (i < n);
}
