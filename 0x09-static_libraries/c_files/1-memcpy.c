#include "main.h"

/**
 *_memcpy - function that copies memory area.
 *@dest: memory area pointer
 *@src: memory area pointer
 *@n: bytes of the memory
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
