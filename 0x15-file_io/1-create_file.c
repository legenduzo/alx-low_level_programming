#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: text content
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, res, n;
	int flag = O_RDWR | O_CREAT | O_TRUNC;
	struct stat st;
	mode_t mode;

	if (!filename)
		return (-1);

	if (stat(filename, &st) == 0)
		mode = st.st_mode;
	else
		mode = 0600;

	fd = open(filename, flag, mode);

	if (!text_content)
		n = 0;
	else
		n = strlen(text_content) + 1;

	res = write(fd, text_content, n);

	if (res == n)
		return (1);
	else
		return (-1);
}
