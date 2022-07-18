#include "main.h"

/**
 *_strchr - function that locates a character in a string.
 *@s: pointer to string s
 *@c: character to be located
 *Return: the pointer to the first occurence of c
 */

char *_strchr(char *s, char c)
{
unsigned int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (&s[i]);
}
if (s[i] == 0)
{
return ('\0');
}
}
return ('\0');
}
