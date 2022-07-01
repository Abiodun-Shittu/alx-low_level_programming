#include <stdio.h>

/**
 * main - This program prints every letter of the alphabet in lowercase
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
