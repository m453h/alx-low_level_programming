#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - prints char data type.
 * @arg: list of characters to print.
 */
void print_char(va_list arg)
{
	printf("%c", (char) va_arg(arg, int));
}

/**
 * print_int - prints int data type.
 * @arg: list of int to print.
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - prints float data type.
 * @arg: list of float to print
 */
void print_float(va_list arg)
{
	printf("%f", (float) va_arg(arg, double));
}

/**
 * print_string - prints string data type.
 * @arg: list of string to print
 */
void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}



/**
 * print_all - prints float, int, string, char types.
 * @format: type of data to print.
 * @...: a variable number of parameters to print.
 *
 * Return: (void)
 *
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	va_list list;
	char *separator = "";

	p_t pts[] = {
		{print_char, 'c'},
		{print_int, 'i'},
		{print_float, 'f'},
		{print_string, 's'}
	};

	va_start(list, format);

	while (format && format[i])
	{
		j = 0;

		while (format[i] != pts[j].p && j < 4)
		{
			j++;
		}

		if (j < 4)
		{
			printf("%s", separator);
			pts[j].f(list);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(list);
}
