#include "main.h"

/**
 * puts2 - displays every other character of a string
 * @str: The input string to be displayed
 * Description: this function displays every other character
 * of a string (i.e. characters with even number index)
 *
 *  Return: (void)
 */
void puts2(char *str)
{
	int counter = 0;

	while (str[counter] != '\0')
	{
		if (counter % 2 == 0)
			_putchar(str[counter]);

		counter++;
	}

	_putchar('\n');
}
