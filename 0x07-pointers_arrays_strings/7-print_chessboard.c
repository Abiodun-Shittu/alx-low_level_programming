#include "main.h"

/**
 * print_chessboard - function that prints the chessboard.
 *
 * @a: pointer variable a
 *
 */

void print_chessboard(char (*a)[8])
{
	int i, i;

	for (i = 0; i < 8; i++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[i][i]);
		}
		_putchar('\n');
	}
}
