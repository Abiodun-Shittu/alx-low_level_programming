#include "main.h"

/**
 * puts_half - function that prints half of a string
 * followed by a new line.
 *
 * @str: the variable pointer at str
 *
 */

void puts_half(char *str)
{
int len;
int half;

for (len = 0; str[len] != '\0'; len++)
{

}
half = (len + 1) / 2;
while (str[half])
{
_putchar(str[half]);
half++;
}
_putchar('\n');
}
