#include "main.h"

/**
 * rev_string - function that reverses a string.
 *
 * @s: the variable pointer at s
 *
 */

void rev_string(char *s)
{
int i;
int j = 0;
char r[1000];

for (i = 0; s[i] != '\0'; i++)
{
r[i] = s[i];
}
i--;
while (i >= 0)
{
s[i] = r[j];
i--;
j++;
}
s[j++] = '\0';
}
