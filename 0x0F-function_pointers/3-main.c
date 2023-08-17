#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - the entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int a, b;

	int (*op_func)(int, int);

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (b == 0 && (strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0))
	{
		printf("Error\n");
		exit(100);
	}
	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", op_func(a, b));

	return (0);
}
