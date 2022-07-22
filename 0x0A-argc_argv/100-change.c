#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins
 * to make change for an amount of money
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 success 1 failure
 */

int main(int argc, char **argv)
{
	int coins, i, amount;
	int value[5] = {25, 10, 5, 2, 1};

	coins = 0;
	amount = atoi(argv[argc - 1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (amount <= 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (value[i] <= amount)
			{
				coins += (amount / value[i]);
				amount -= (amount / value[i]) * value[i];
				if (amount == 0)
				{
					printf("%d\n", coins);
					break;
				}
			}
		}
	}
	return (0);
}
