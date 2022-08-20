#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointer to the string of 0's and 1's
 * Return: an unsigned int number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0;

	if (!b)
		return (0);

	for (i = 0; *(b + i) != '\0'; i++)
	{
		if (*(b + i)  == '1')
			num = (num << 1) | 1;
		else if (*(b + i) == '0')
			num <<= 1;
		else
			return (0);
	}
	return (num);
}
