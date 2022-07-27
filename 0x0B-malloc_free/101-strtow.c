#include "main.h"

/**
 * countWords - counts the numbers o words in the string
 *
 * @str: source string
 *
 * Return: the number of words.
 */

int countWords(char *str)
{
	int words;

	words = 0;

	while (*str)
	{
		if (*str != ' ')
		{
			if (*(str + 1) == ' ' || *(str + 1) == '\0')
				words++;
			str++;
		}
		else
			str++;
	}
	return (words);
}

/**
 * countChars - counts the numbers o characters in a string
 *
 * @str: source string
 *
 * Return: the number of words.
 */

int countChars(char *str)
{
	int chars;

	chars = 0;
	while (*str)
	{
		if (*str != ' ')
		{
			if (*(str + 1) != ' ' || *(str + 1) != '\0')
				chars++;
			str++;
		}
		else
			break;
	}
	return (chars);
}

/**
 * strtow - separates the character to an string of words
 *
 * @str: source string
 *
 * Return: the pointer to the new array of words.
 */

char **strtow(char *str)
{
	int numWords, numChars, i, j;
	char **words;

	i = 0;
	if (str == NULL || *str == '\0')
		return (NULL);
	numWords = countWords(str);
	if (numWords == 0)
		return (NULL);
	words = (char **) malloc((numWords + 1) * sizeof(char *));
	if (words == NULL)
	{
		free(words);
		return (NULL);
	}
	while (i < numWords)
	{
		if (*str == ' ')
			str++;
		else
		{
			numChars = countChars(str);
			*(words + i) = (char *) malloc((numChars + 1) * sizeof(char));
			if (*(words + i) == NULL)
			{
				for (j = 0; j < i; j++)
					free(*(words + j));
				free(words);
				return (NULL);
			}
			for (j = 0; j < numChars; j++)
			{
				*(*(words + i) + j) = *str;
				str++; }
			*(*(words + i) + j) = '\0';
			i++;
		}
	}
	*(words + numWords) = NULL;
	return (words);
}

