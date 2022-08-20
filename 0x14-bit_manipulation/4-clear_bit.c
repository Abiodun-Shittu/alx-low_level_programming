#include "main.h"

/**
 * clear_bit - function that change to 0 the bit of a given index.
 * @n: the input number
 * @index: the input index
 * Return: 1 if works if failure -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 0;

	if (index > 63)
		return (-1);

	mask = 1 << index;
	mask = ~mask;
	*n = *n & mask;
	return (1);
}
