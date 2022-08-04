#include "3-calc.h"

/**
 * op_add - adds two number.
 * @a: first number.
 * @b: second number.
 * Return: result.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts two number.
 * @a: first number.
 * @b: second number.
 * Return: result.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplicates two number.
 * @a: first number.
 * @b: second number.
 * Return: result.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two number.
 * @a: first number.
 * @b: second number.
 * Return: result.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	else
		return (a / b);
}

/**
 * op_mod - obteins the module between two number.
 * @a: first number.
 * @b: second number.
 * Return: result.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a % b);
}
