#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <sys/types.h>

/**
 * read_textfile - reads a textfile and prints it to stdout
 * @filename: filename
 * @letters: number of characters
 *
 * Return: ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *textfile;
	ssize_t printed = 0, i = 0;
	char c;

	if (!filename || letters < 1)
	{
		return (0);
	}

	textfile = fopen(filename, "r");

	if (!textfile)
		return (0);

	while ((c = fgetc(textfile)) != EOF)
	{
		if (printed < (ssize_t)letters)
		{
			i = write(STDOUT_FILENO, &c, 1);
			if (i == -1)
				return (0);
			printed += i;
		}
	}

	fclose(textfile);
	return (printed);
}
