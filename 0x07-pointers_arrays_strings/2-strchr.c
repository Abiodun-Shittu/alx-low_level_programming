#include "main.h"

/**
 *_strchr - function that locates a character in a string.
 *@s: pointer to string s
 *@c: character to be located
 *Return: the pointer to the first occurence of c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
    ++s;
	}
	if (*s == c)
	{
		return (s);
  }
	return (0);
}
