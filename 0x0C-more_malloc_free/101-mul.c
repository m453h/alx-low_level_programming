#include <stdio.h>
#include <stdlib.h>

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
			printf("%s", "Error\n");
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
 * Return: 0 if success, 1 if fail
 */
int multiply(char *s1, char *s2)
{
	int i, j, tmp, *a, *b, *ans;
	char *result;

	int l1 = _strlen(s1);
	int l2 = _strlen(s2);

	a = malloc(sizeof(int) * l1 + 1);
	b = malloc(sizeof(int) * l2 + 1);
	ans = malloc(sizeof(int) * (l1 + l2) + 1);
	result = malloc(sizeof(char) * (l1 + l2 + 1));

	if (a == NULL || b == NULL || ans == NULL || result == NULL)
		return (0);
	for (i = l1 - 1, j = 0; i >= 0; i--, j++)
	{
		a[j] = s1[i] - '0';
	}
	for (i = l2 - 1, j = 0; i >= 0; i--, j++)
	{
		b[j] = s2[i] - '0';
	}
	for (i = 0; i < l2; i++)
	{
		for (j = 0; j < l1; j++)
			ans[i + j] += b[i] * a[j];
	}
	for (i = 0; i < l1 + l2; i++)
		tmp = ans[i] / 10, ans[i] = ans[i] % 10, ans[i + 1] = ans[i + 1] + tmp;
	for (i = l1 + l2; i >= 0; i--)
	{
		if (ans[i] > 0)
			break;
	}
	for (j = i; j >= 0; j--)
		result[i - j] = ans[j] + '0';

	printf("%s\n", result);

	free(a), free(b), free(ans), free(result);
	return (1);
}

/**
 * is_zero - checks if a string is only made up of zero
 *@s: The input string to check
 *
 *  Return: 1 if string is made up of only zero, 0 if not
 */
int is_zero(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] != '0')
		{
			return (0);
		}

		i++;
	}

	return (1);
}

/**
 * main - multiplies two arguments passed by the user
 *
 * @argc: the number of arguments passed to the program
 * @argv: the array containing the arguments passed to the program
 *
 * Return: (0) if two arguments were passed by user, if not exits with code 98
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;

	if (argc == 3)
	{
		s1 = argv[1];
		s2 = argv[2];

		if (is_zero(s1) || is_zero(s2))
		{
			printf("%s\n", "0");
		}
		else
		{
			multiply(s1, s2);
		}

		return (0);

	}

	printf("%s", "Error\n");
	exit(98);

}
