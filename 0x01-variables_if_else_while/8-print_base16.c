#include <stdio.h>

/**
 * main - prints numbers of base 16 in lowercase
 * followed by new line
 * Return: 0 if (successful)
*/

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i <= 102; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
