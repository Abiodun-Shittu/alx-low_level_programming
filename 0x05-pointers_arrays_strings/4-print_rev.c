#include "main.h"

/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line
 *
 * @s: the variable pointer at s
 *
 */

void print_rev(char *s)
{
int i, n;

for (i = 0; s[i] != '\0'; i++)
{

}
for (n = i - 1; n >= 0; n--)
{
_putchar(s[n]);
}
_putchar('\n');
}
