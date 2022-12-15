#include "main.h"

/**
 * more_numbers- Display integers from 0 to 9, 14 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;
	int display_number;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			display_number = j;

			if (display_number > 9)
			{
				_putchar('1');
				display_number = display_number - 10;
			}

			_putchar(display_number + '0');
		}

		_putchar('\n');
	}
}
