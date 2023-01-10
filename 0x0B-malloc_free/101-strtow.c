#include "main.h"
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
		length++;
	}

	return (length);
}

/**
 * get_word_count - Counts the number of words in a string using space
 * as the separator
 *
 * @str: The string to count number of words
 *
 * Return: (int) number of words in @str
 */
int get_word_count(char *str)
{
	int i, word_count = 0;
	char should_count_word = '1';

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			should_count_word = '1';
		}
		else if (should_count_word == '1')
		{
			should_count_word = '0';
			word_count++;
		}
	}

	return (word_count);
}


/**
 * strtow - splits a string into words, using space
 * as the separator.
 * @str: the input string to split into words
 *
 * Return: a pointer to an array of strings (words) else
 * NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	char **str_array, *tmp;
	int i, length, word_count, k = 0, j = 0, start, stop;

	length = _strlen(str);
	word_count = get_word_count(str);
	if (word_count == 0)
		return (NULL);
	str_array = (char **) malloc(sizeof(char *) * (word_count + 1));

	if (str_array == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (j > 0)
			{
				stop = i;
				tmp = (char *) malloc(sizeof(char) * (j + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < stop)
				{
					*tmp++ = str[start];
					start++;
				}
				*tmp = '\0';
				str_array[k] = tmp - j;
				k++;
				j = 0;
			}
		}
		else if (j++ == 0)
			start = i;
	}
	str_array[k] = NULL;

	return (str_array);
}
