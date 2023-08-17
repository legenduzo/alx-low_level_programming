#include <stdio.h>
#include <stdlib.h>

/**
 * opcodes - prints main()'s opcodes
 * @code: the main function
 * @n: number of opcodes to print
 *
 * Return: void
 */

void opcodes(char *code, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%02hhx ", code[i]);
		else
			printf("%02hhx", code[i]);
	}
	printf("\n");
}

/**
 * main - the function to print its opcode
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	opcodes((char *) main, n);

	return (0);
}


