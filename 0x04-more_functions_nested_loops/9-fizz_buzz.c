#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100 followed by a new line
 * for multiples of 3 print Fizz
 * for multiples of 5 print Buzz
 * for multipes of 3 and 5 print FizzBuzz
 *
 * Return: returns 0
 */

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 5 == 0 && i % 3 == 0)
{
printf("%s", "FizzBuzz");
}
else if (i % 3 == 0)
{
printf("%s", "Fizz");
}
else if (i % 5 == 0)
{
printf("%s", "Buzz");
}
else
{
printf("%d", i);
}
if (i != 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
