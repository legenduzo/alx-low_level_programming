#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers
 * @argc: argument count
 * @argv: argument vector. String array of arguments
 *
 * Return: int 1 or 0
 */

int main(int argc, char *argv[])
{
	if ((argc < 3) || (argc > 3))
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
