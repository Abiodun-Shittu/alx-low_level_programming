#include "main.h"

/**
 * _strdup - function that returns a pointer to newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 *
 * @str: string to duplicate
 *
 * Return: a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *copy;
	int size, i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (size = 0; str[size] != '\0'; size++)
	*copy = malloc(size * sizeof(char));
	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		copy[i] = str[i];
	}
	return (copy);
}
