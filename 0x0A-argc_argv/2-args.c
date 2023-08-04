#include <stdio.h>

/**
 * main - returns the argument passed
 * @argc: argument count
 * @argv: argument vector. One dimensional array of strings
 *
 * Return: 0 always success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
