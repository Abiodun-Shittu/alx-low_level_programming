#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
int s, n;

if (size <= 0)
{
_putchar ('\n');
}
n = 0;
while (n < size)
{
s = (size - 1);
while (s > n)
{
_putchar (' ');
s--;
}
s = 0;
while (s <= n)
{
_putchar ('#');
s++;
}
_putchar ('\n');
n++;
}
}
