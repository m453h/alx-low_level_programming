#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: the input string
 *
 * Description - this function capitalizes all words
 * of a string the separator for words considered include:
 * space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
 *
 * Return: (char) the string in upper case
 */
char *cap_string(char *s)
{
	int i = 0, is_capitalize_next = 1;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (is_capitalize_next == 1)
			{
				s[i] = s[i] - 32;
			}
		}
		else
		{
			is_capitalize_next = 0;
		}

		if (s[i] == '\n' || s[i] == ',' ||
			s[i] == ',' || s[i] == ';' ||
			s[i] == '.' || s[i] == '!' ||
			s[i] == '?' || s[i] == '"' ||
			s[i] == '(' || s[i] == ')' ||
			s[i] == '{' || s[i] == '}')
		{
			is_capitalize_next = 1;
		}
		else
		{
			is_capitalize_next = 0;
		}

		i++;
	}


	return (s);
}
