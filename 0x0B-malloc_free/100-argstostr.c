#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of program
 * @ac: number of arguments
 * @av: pointer to array of arguments
 * 
 * Return: pointer to a string containing all agruments else 
 * NULL if fails to concatenate the agruments
 */
char *argstostr(int ac, char **av)
{
	char *args_str;
	int length = 0, i, j, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			length++;
		}
	}

	args_str = malloc(sizeof(char) * length + 1);

	if (args_str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			args_str[k] = av[i][j];
			k++;
		}

		args_str[k++] = '\n';
	}

	args_str[k] = '\0';

	return (args_str);
}