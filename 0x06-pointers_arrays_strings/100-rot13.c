#include "main.h"

/**
* rot13 - encodes a string using rot13.
* @s: The string
* Return: The string
*/

char *rot13(char *s)
{
int i, j;
char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char change;

for (i = 0; s[i] != '\0'; i++)
{
change = 0;
for (j = 0; alpha[j] != '\0' && change == 0; j++)
{
if (s[i] == alpha[j])
{
s[i] = r[j];
change = 1;
}
}
}
return (s);
}
