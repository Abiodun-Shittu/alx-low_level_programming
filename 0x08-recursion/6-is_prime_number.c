#include "main.h"

/**
 * is_prime - calculate if the number is prime.
 * @n: natural number
 * @i: counter or divisor of n.
 *
 * Return: 1 if is prime 0 otherwise.
 */
int is_prime(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	else if (i == (n - 1) && n % i != 0)
	{
		return (1);
	}
	else
	{
		return (is_prime(n, i + 1));
	}
}

/**
 * is_prime_number - function that returns 1,
 * if the input integer is a prime number.
 * @n: natural number
 *
 * Return: 1 if is prime otherwise 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (is_prime(n, 2));
	}
}
