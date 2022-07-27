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
	char *dupl;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	dupl = malloc(sizeof(char) * (i + 1));

	if (dupl == NULL)
		return (NULL);

	for (j = 0; (dupl[j] = str[j]) != '\0'; j++)
		;

	dupl[i] = '\0';

	return (dupl);
}
