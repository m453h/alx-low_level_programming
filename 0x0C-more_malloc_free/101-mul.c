#include <stdlib.h>
#include <stdio.h>

void *_calloc(unsigned int nmemb, unsigned int size);
int is_digit(char *s);
void rev_number_string(int length, char *str);
int _strlen(char *s);
char *multiply(char *s1, char *s2);

/**
 * _calloc - allocates memory for an array
 * @nmemb: The number of array elements
 * @size: The number of bytes for each element
 *
 *  Return: (NULL) if @nmemb = 0 or @size = 0,
 *  pointer to created array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memb_array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memb_array = malloc(size * nmemb);

	if (memb_array == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		memb_array[i] = 0;
	}

	return (memb_array);
}

/**
 * is_digit - check if string is digit
 * @s: string to check
 *
 * Return: (1) If string is digit, Else return (0)
 */
int is_digit(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
		{
			return (0);
		}

		s++;
	}

	return (1);
}

/**
 * rev_number_string - reverse a number string
 * @length: length of the number
 * @str: string containing number
 */
void rev_number_string(int length, char *str)
{
	int i, j;
	char tmp;

	while (str[length] == 0 && length != 0)
		--length;

	for (i = 0, j = length; i <= j; ++i, --j)
	{
		tmp = str[i] + '0';
		str[i] = str[j] + '0';
		str[j] = tmp;
	}
}

/**
 * _strlen - calculates the length of a string
 *@s: The input string used to determine length
 *
 *  Return: (int) length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		if (s[length] >= '0' && s[length] <= '9')
		{
			length++;
		}
		else
		{
			exit(98);
		}
	}

	return (length);
}

/**
 * multiply - multiplies two numbers stored as strings
 *
 * @s1: first number to be multiplied
 * @s2: second number to be multiplied
 *
 * Return: pointer to the array containing the result
 */
char *multiply(char *s1, char *s2)
{
	int length_1, length_2, i, j, k, l;
	char *result;
	char multiply, multiply_carry, sum, sum_carry;

	length_1 = _strlen(s1), length_2 = _strlen(s2);
	result = _calloc((length_1 + length_2 + 1), sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = length_2 - 1, l = 0; i >= 0; --i, ++l)
	{
		multiply_carry = 0, sum_carry = 0;

		for (j = length_1 - 1, k = l; j >= 0; --j, ++k)
		{
			multiply = (s1[j] - '0') * (s2[i] - '0') + multiply_carry;
			multiply_carry = multiply / 10;
			multiply %= 10;
			sum = result[k] + multiply + sum_carry;
			sum_carry = sum / 10;
			sum %= 10;
			result[k] = sum;
		}

		result[k] = sum_carry + multiply_carry;
	}

	rev_number_string(k, result);
	return (result);
}

/**
 * main - multiply two numbers from the command line and print the result
 * @argc: argument count
 * @argv: argument list
 *
 * Return: 0 if successful, 98 if failure
 */
int main(int argc, char *argv[])
{
	char *result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	result = multiply(argv[1], argv[2]);

	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	printf("%s\n", result);
	free(result);
	return (0);
}
