#include "main.h"

/**
 * array_range - function that creates an array of integers.
 *
 * @min: minimum integer
 * @max: maximum integer
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *arr, i, len;

	if (min > max)
		return (NULL);
	len = (max - min) + 1;

	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
