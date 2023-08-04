#include <stdio.h>

/**
 * main - returns the name of file
 * @argc: argument count
 * @argv: argument vector. One dimensional array of strings
 *
 * Return: 0 always success
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
