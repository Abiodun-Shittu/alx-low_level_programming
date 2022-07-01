#include <stdio.h>

/**
 * main - This program prints every letter of the alphabet
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar(i);
	for (i = 65; i < 91; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
