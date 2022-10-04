#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: pointer to string s
 * @accept: This is the second string
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (s + i);
}
}
}
return ('\0');
}
