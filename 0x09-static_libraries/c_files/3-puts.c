#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line
 *
 * @str: the variable pointer at str
 *
 */

void _puts(char *str)
{
int i;

for (i = 0; str[i] != '\0' ; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
