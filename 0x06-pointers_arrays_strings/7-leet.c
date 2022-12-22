#include "main.h"

/**
 * leet - encodes the string to 1337
 * @s: the input string
 *
 * Return: (char) the string encoded to 1337
 */
char *leet(char *s)
{
	int i = 0, j;
	char a[] = {'a', 'e', 'o', 't', 'l'};
	char l[] = {'4', '3', '0', '7', '1'};

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == a[j] || s[i] == a[j] - 32)
			{
				s[i] = l[j];
			}
		}

		i++;
	}

	return (s);
}
