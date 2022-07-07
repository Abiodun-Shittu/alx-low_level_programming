#include "main.h"

/**
* print_most_numbers - function that prints the numbers, from 0 to 9
* followed by a new line.
* do not print 2 and 4
*/

void print_most_numbers(void)
{
int num = 0;
while (num <= 9)
{
if ((num == 2) || (num == 4))
{
num++;
continue;
}
else
{
_putchar(num + '0');
}
num++;
}
_putchar('\n');
}
