#include "main.h"

/**
 * rev_string - reverses a string
 * @str: The input string to be reversed
 *
 *  Return: (void)
 */
void rev_string(char *str)
{
	int length = 0, min_index = 0, max_index;
	char temp;

	while (str[length] != '\0')
	{
		length++;
	}

	max_index = length - 1;

	while (min_index < max_index)
	{
		temp = str[min_index];
		str[min_index] = str[max_index];
		str[max_index] = temp;
		min_index++;
		max_index--;
	}
}
