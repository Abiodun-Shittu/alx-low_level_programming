#include "main.h"

/**
 * _realloc - function that reallocates a memory block
 * using malloc and free
 *
 * @ptr: pointer to old array.
 * @old_size: the size of ptr
 * @new_size: new size of array
 *
 * Return: pointer to the new array.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptrMem;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptrMem = malloc(new_size);
	if (ptrMem == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
		ptrMem[i] = *((char *)ptr + i);

	free(ptr);
	return (ptrMem);
}
