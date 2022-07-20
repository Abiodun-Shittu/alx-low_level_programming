#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 *
 * @n: given number
 * Return: the factorial
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
