/**
 * wildcmp - checks if two strings are identical
 * @s1: first string to use in comparison
 * @s2: second string to use in comparions
 *
 *  Return: 1 if @s1 and @s2 are identical or 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0' && *s1 == '\0')
	{
		return (1);
	}

	if (*s2 == '*')
	{

		return (wildcmp(s1, s2 + 1) ||
		       (*s1 != '\0' && wildcmp(s1 + 1, s2)) ||
		       (*s1 != '\0' && wildcmp(s1 + 1, s2 + 1)));

	}

	if (*s1 != *s2)
		return (0);

	return (wildcmp(s1 + 1, s2 + 1));

}
