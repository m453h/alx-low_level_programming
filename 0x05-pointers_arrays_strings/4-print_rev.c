#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @str: The input string to be printed
 *
 *  Return: (void)
 */
void print_rev(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	while (length)
	{
		length--;
		_putchar(str[length]);
	}

	_putchar('\n');
}
