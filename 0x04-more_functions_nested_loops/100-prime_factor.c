#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
long int num, p;

num = 612852475143;
for (p = 2; p <= num; p++)
{
if (num % p == 0)
{
num = num / p;
p--;
}
}
printf("%ld\n", p);
return (0);
}
