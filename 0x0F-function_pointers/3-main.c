#include "3-calc.h"

/**
 * main - operates two numbers.
 * @argc: argument counter.
 * @argv: argument vector.
 * Return: result, otherwise 98 for arg error, 99 for op, error 100 for divide
 * or multiply by 0
 */

int main(int argc, char **argv)
{
	int a, b, answer;
	int (*function)(int, int);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		puts("Error");
		exit(99);
	}

	function = get_op_func(*(argv + 2));
	if (!function)
	{
		puts("Error");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	answer = function(num1, num2);
	printf("%d\n", answer);
	return (0);
}
