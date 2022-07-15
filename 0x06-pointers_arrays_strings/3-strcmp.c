#include "main.h"

/**
* _strcmp - Compares two strings.
* @s1: First string
* @s2: Second string
*
* Return: 0 if similar, positive number if s1 > s2, otherwise negative number
*/

int _strcmp(char *s1, char *s2)
{
while(( *s1 != '\0' && *s2 != '\0' ) && *s1 == *s2)
{
s1++;
s2++;
}
if(*s1 == *s2)
{
return (0);
}
else
{
return (*s1 - *s2);
}
}
