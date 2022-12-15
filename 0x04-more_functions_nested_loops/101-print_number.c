#include "main.h"

/**
 * print_number - recursively prints an integer using _putchar
 *@n: The input intenger to be printed
 *
 *  Return: (void)
 */
void print_number(int n)
{
	int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = num * -1;
	}

	if ((num / 10) > 0)
	{
		print_number(num / 10);
	}

	_putchar((num % 10) + '0');
}
