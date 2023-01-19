#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string printed between numbers.
 * @n: number of parameters passed to the function.
 * @...: a variable number of parameters to print.
 *
 * Return: (void)
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i + 1 < n)
			printf("%d%s", va_arg(numbers, int), separator);
		else
			printf("%d", va_arg(numbers, int));

	}

	va_end(numbers);
	printf("\n");
}
