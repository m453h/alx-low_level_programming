#include <stdio.h>

/**
 * main - prints the number of arguments passed to a program, followed by a new line
 *
 * @argc: the number of arguments passed to the program
 * @argv: the array containing the arguments passed to the program
 *
 * Return: Always (0).
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc);

	return (0);
}
