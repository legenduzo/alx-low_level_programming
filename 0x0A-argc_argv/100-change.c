#include <stdio.h>
#include <stdlib.h>

/**
 * min_coins - helper function to calculate min coins
 * @cents: Amount in cents
 *
 * Return: int
 */

int min_coins(int cents)
{
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(coins) / sizeof(coins[0]);

	int count = 0;
	int i;

	for (i = 0; i < num_coins; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			count++;
		}
	}
	return (count);
}

/**
 * main - returns changes
 * @argc: argument count
 * @argv: argument vector. An array of strings
 *
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int a;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);

	if (a <= 0)
	{
		printf("0\n");
		return (0);
	}

	printf("%d\n", min_coins(a));
	return (0);
}
