#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string printed between numbers.
 * @n: number of parameters passed to the function.
 * @...: a variable number of paramters to sum.
 *
 * Return: (int) - if (n == 0) then return 0, else
 * sum of all parameters.
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
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
}
