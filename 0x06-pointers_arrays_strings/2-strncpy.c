#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: Destination string
 * @src: Source string
 * @n: number of bytes
 *
 * Return: Return a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[i]  = src[i];
}
for (; n > i; i++)
{
dest[i] = '\0';
}
return (dest);
}
