#include "main.h"
/**
 * sum_strings - Adds the numbers stored in two strings.
 * @n1: The string containing the first number to be added.
 * @n2: The string containing the second number to be added.
 * @r: The buffer for result storage.
 * @r_index: The current buffer index
 *
 * Return: Pointer to result if can sum, otherwise 0
 */
char *sum_strings(char *n1, char *n2, char *r, int r_index)
{
	int number, tens = 0;

	while (*n1 && *n2)
	{
		number = (*n1 - '0') + (*n2 - '0');
		number += tens;
		r[r_index] = (number % 10) + '0';
		tens = number / 10;
		n1--;
		n2--;
		r_index--;
	}

	while (*n1)
	{
		number = (*n1 - '0') + tens;
		r[r_index] = (number % 10) + '0';
		tens = number / 10;
		n1--;
		r_index--;
	}

	while (*n2)
	{
		number = (*n2 - '0') + tens;
		r[r_index] = (number % 10) + '0';
		tens = number / 10;
		n2--;
		r_index--;
	}

	if (tens && r_index >= 0)
	{
		r[r_index] = (tens % 10) + '0';
		return (r + r_index);
	}
	else if (tens && r_index < 0)
		return (0);

	return (r + r_index + 1);
}

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number to be added.
 * @n2: The second number to be added.
 * @r: The buffer for results storage.
 * @size_r: The buffer size.
 *
 * Description - this function adds two numbers stored as
 * strings it is assumed that n1 and n2 will always be positive, or 0
 * and n1 and n2 will never be empty and always contains digits
 *
 * Return: Pointer to result if can sum, otherwise 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int index, n1_length = 0, n2_length = 0;

	for (index = 0; n1[index]; index++)
		n1_length++;

	for (index = 0; n2[index]; index++)
		n2_length++;

	if (size_r <= n1_length + 1 || size_r <= n2_length + 1)
		return (0);

    /** Get the first digit of n1 and n2 **/
	n1 = n1 + n1_length - 1;
	n2 = n2 + n2_length - 1;

	r[size_r] = '\0';
	size_r--;

	return (sum_strings(n1, n2, r, size_r));
}
