#include <stdio.h>

/**
 * _strstr - function that locates a substring.
 * @haystack: This is the input string
 * @needle: This is a find to locate in the string
 * Return: a pointer to the beginning of the located substring, or NULL if the
 * substring is not found
 */

char  *_strstr(char *haystack, char *needle)
{
	char *str1, *str2;

	while (*haystack != '\0')
	{
		str1 = haystack;
		str2 = needle;

		while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
		{
			haystack++;
			str2++;
		}
		if (*str2 == '\0')
			return (str1);
		haystack = str1 + 1;
	}
	return (0);
}
