#include "main.h"

/**
 * print_line -  function that draws a straight line in the terminal.
 * @n: numbers of straight lines
 *
 */

void print_line(int n)
{
int i;

for (i = 1; i <= n; i++)
{
if (n <= 0)
{
_putchar('\n');
}
_putchar('_');
}
_putchar('\n');
}
