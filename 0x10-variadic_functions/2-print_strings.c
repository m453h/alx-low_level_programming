#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string printed between numbers.
 * @n: number of parameters passed to the function.
 * @...: a variable number of parameters to print.
 *
 * Return: (void)
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list strings;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char*);

		if (str == NULL)
			str = "(nil)";

		if (separator != NULL && i + 1 < n)
			printf("%s%s", str, separator);
		else
			printf("%s", str);

	}

	va_end(strings);
	printf("\n");
}
