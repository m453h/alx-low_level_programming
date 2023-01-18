#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - performs simple operations
 *
 * @argc: the number of arguments passed to the program
 * @argv: the array containing the arguments passed to the program
 *
 * Description: calculates basic arithmetic
 *
 * Return: (0) if success,
 * else if wrong number of arguments passed returns (98),
 * else if second operand is 0 and the operation is / or % returns (100),
 * else if incorrect operand has been passed returns (99)
 */
int main(int argc, char *argv[])
{
	char op;
	int a, b;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	op = *(argv[2]);
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (op == '/' || op == '%')
	{
		if (b == 0)
		{
			printf("Error\n");
			return (100);
		}
	}

	op_func = get_op_func(&op);

	if (op_func == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		return (99);
	}

	printf("%d\n", op_func(a, b));

	return (0);
}
