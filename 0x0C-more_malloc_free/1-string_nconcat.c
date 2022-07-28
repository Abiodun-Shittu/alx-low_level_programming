#include "main.h"

/**
 * string_nconcat - function that concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 * @n: memory size
 *
 * Return: a pointer to the string array of the 2 strings.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i, len1, len2, total_len;

	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;
	if (n >= len2)
		n = len2;

	total_len = len1 + n;

	s3 = malloc(sizeof(char) * (total_len + 1));
	if (s3 == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		s3[i] = s1[i];
	for (i = 0; i < n; i++)
		s3[len1 + i] = s2[i];
	s3[len1 + i] = '\0';

	return (s3);
}
