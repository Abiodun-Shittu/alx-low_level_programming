#include <stdio.h>

/**
 * main - prints alphabets in reverse
 * followed by  new line
 * Return: 0 if (successful)
*/

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
