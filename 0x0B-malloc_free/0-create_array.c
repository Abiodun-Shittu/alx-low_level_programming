#include "main.h"

/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char.
 *
 * @size: number elements in the array
 * @c: char
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arrMem;
	unsigned int i;

	if (size == 0)
	{
		return ('\0');
	}
	arrMem = malloc(size * sizeof(char));
	if (arrMem == '\0')
	{
		return ('\0');
	}
	for (i = 0; i < size; i++)
	{
		*(arrMem + i) = c;
	}
	return (arrMem);
}
