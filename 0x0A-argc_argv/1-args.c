#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (success)
 */

int main(int argc, char **argv)
{
	int num;

	for (num = 0; num < argc;)
	{
		num++;
		(*argv)++;
	}
	printf("%i\n", num - 1);
	return (0);
}
