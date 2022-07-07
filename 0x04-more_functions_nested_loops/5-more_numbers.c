#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 * followed by a new line.
 *
 */

void more_numbers(void)
{
int i, j;
for (i = 1; i <= 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
{
_putchar((j / 10) + '0');
}
_putchar((j % 10) + '0');
}
_putchar('\n');
}
}
