#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: The input string to be displayed
 *
 * Description: this function displays half of a string
 * if the string length 'n' is odd then it displays
 * n = (length_of_the_string - 1) / 2
 *
 *  Return: (void)
 */
void puts_half(char *str)
{
	int length = 0, i, start_index;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
		start_index = length / 2;
	else
		start_index  = (length - 1) / 2;

	for (i = start_index; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
