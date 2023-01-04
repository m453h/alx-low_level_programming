#include "main.h"

/**
 * _print_rev_recursion - displays a string in reverse recursively
 * @s: the string to display
 *
 *  Return: (void)
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
