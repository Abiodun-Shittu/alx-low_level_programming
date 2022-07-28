#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc.
 *
 * @b: memory size
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *memArr;

	memArr = malloc(b);
	if (memArr == NULL)
		exit(98);
	return (memArr);
}
