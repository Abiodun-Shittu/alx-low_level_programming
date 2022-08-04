#include "function_pointers.h"

/**
 * int_index - searches for an integer in @array
 * @array: pointer to the array of numbers.
 * @size: size of array.
 * @cmp: pointer to comparation function
 * Return: the index of array.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
