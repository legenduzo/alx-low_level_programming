#define UNUSED(x) (void)(x)
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
	UNUSED(argc);

	printf("%s\n", argv[0]);

	return (0);
}
