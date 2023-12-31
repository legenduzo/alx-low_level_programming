#include <stdlib.h>
#include <stdio.h>

/**
 * main - sums arguments
 * @argc: argument cound
 * @argv: argument vector, pointer to an array of strings
 *
 * Return: int 1 or 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	char *endptr;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		strtol(argv[i], &endptr, 10);

		if (endptr == argv[i] || *endptr != '\0')
		{
			printf("Error\n");
			return (1);
		}

		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
