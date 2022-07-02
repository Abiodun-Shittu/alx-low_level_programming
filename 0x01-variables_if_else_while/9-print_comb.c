#include <stdio.h>

/**
 * main - prints all npossible numbers of single digits
 * followed by a new line
 * Return: 0 if (successful)
*/

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
		else
		{
			putchar(10);
		}
	}
	return (0);
}
