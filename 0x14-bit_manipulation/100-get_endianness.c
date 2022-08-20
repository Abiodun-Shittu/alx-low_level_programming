#include "main.h"

/**
 * get_endianness - function that defines if a pc is big or little endianness.
 * Return: 0 big 1 little
 */
int get_endianness(void)
{
	int i = 1;

	if ((i >> 31) == 1)
		return (0);
	else
		return (1);
}
