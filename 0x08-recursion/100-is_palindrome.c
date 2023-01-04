/**
 * _strlen_recursion - calculates the length of a string recursively
 * @s: the string to calculate length
 *
 *  Return: (int) - length of string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}

	return (0);
}

/**
 * _palindrome_checker - checks if a string of length > 1 is a palindrome
 * @s: the string to check if is a palindrome
 * @index: the starting index for making comparisons
 * @length: the length of the string
 *
 *  Return: 1 if @s is palindrome or 0 if not
 */
int _palindrome_checker(char *s, int index, int length)
{
	if (s[index] == s[length - index - 1])
	{
		if (index < length - 1)
		{
			return (_palindrome_checker(s, index + 1, length));
		}

		return (1);
	}

	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check if is a palindrome
 *
 *  Return: 1 if @s is palindrome or 0 if not
 */
int is_palindrome(char *s)
{
	int length = 0;

	length = _strlen_recursion(s);

	if (length == 0 || length == 1)
	{
		return (1);
	}

	return (_palindrome_checker(s, 0, length));
}
