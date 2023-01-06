#include "main.h"

void print_alph(void)
{
	char letter;

	for(letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}