#include "main.h"

/**
 * print_times_table - prints multiplication table of n
 * @n: the multiplication table to be displayed
 *
 * Return: (void)
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				product = i * j;

				if (product < 100)
					_putchar(' ');
				if (product < 10)
					_putchar(' ');

				if (product > 99)
				{
					_putchar((product / 100) + '0');
					_putchar(((product / 10)) % 10 + '0');
				}
				else if (product > 9)
				{
					_putchar((product / 10) + '0');
				}
				_putchar((product % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
