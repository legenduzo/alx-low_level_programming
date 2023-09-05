#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define BUF_SIZE 1024
/**
 * error - handles error
 * @str: string
 * @arg: arg
 * @status: status
 */

void error(char *str, char *arg, int status)
{
	dprintf(STDERR_FILENO, str, arg);
	exit(status);
}

/**
 * copy_files - copies
 * @file_from: from
 * @argv: argument vector
 */

void copy_files(int file_from, char **argv)
{
	char buf[BUF_SIZE];
	ssize_t rcount;
	ssize_t wcount;

	int file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (file_to == -1)
		error("Error: Can't write to %s\n", argv[2], 99);

	while ((rcount = read(file_from, buf, BUF_SIZE)) > 0)
	{
		wcount = write(file_to, buf, rcount);
		if (wcount != rcount)
			error("Error: Can't write to %s\n", argv[2], 99);
	}
	if (rcount == -1)
		error("Error: Can't read from file %s\n", argv[1], 98);
	if (close(file_to) == -1)
		error("Error: Can't close fd %d\n", NULL, file_from, 100);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 fail
 */

int main(int argc, char *argv[])
{
	int file_from;

	if (argc != 3)
		error("Usage: cp file_from file_to\n", NULL, 97);
	file_from = open(argv[1], O_RDONLY);

	if (file_from == -1)
		error("Error: Can't read from file %s\n", argv[1], 98);
	copy_files(file_from, argv);

	return (0);
}
