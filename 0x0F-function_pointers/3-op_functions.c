#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first operand
 * @b: second operand
 *
 * Return: (int) result of  @a + @b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: first operand
 * @b: second operand
 *
 * Return: (int) result of @a - @b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first operand
 * @b: second operand
 *
 * Return: (int) result of @a * @b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: first operand
 * @b: second operand
 *
 * Return: (int) result of @a / @b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates mod of two numbers
 * @a: first operand
 * @b: second operand
 *
 * Return: result of @a % @b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
