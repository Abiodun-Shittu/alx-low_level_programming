#include "main.h"

/**
 * main - print the alphabet in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
