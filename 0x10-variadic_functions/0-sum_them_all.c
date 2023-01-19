#include "variadic_functions.h"

/**
 * sum_them_all - sum of all paramters passed.
 * @n: number of parameters passed to the function.
 * @...: a variable number of parameters to sum.
 *
 * Return: (int) - if (n == 0) then return 0, else
 * sum of all parameters.
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list numbers;


	va_start(numbers, n);

	for (i = 0; i < n; i++)
		sum += va_arg(numbers, int);

	va_end(numbers);

	return (sum);
}

