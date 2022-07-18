#include <stdio.h>

/**
 * _strstr - function that locates a substring.
 * @haystack: This is the input string
 * @needle: This is a find to locate in the string
 * Return: a pointer to the beginning of the located substring, or NULL if the
 * substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *change;

		change = haystack;
		while (*needle == *haystack)
		{
			haystack++, needle++;
		}
		if (*needle == '\0')
			return (change);
		haystack++;
	}
	return (0);
}
