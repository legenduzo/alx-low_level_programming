#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - does it
 * @filename: filename
 * @text_content: text
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int res = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content)
		res = write(file, text_content, strlen(text_content));

	close(file);
	if (res > -1)
		return (1);
	else
		return (-1);
}
