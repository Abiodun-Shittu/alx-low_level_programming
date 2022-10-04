#include "main.h"

/**
 * _isalpha - to check for alphabet character
 * @c: integer variable
 * Return: 1 if it is an alphabet character.
 * 0 if it is not an alphabet character.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
