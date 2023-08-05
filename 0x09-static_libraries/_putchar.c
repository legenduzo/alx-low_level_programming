#include <unistd.h>

/* writes to the stdout */

/**
 * putchar - prints 1 char to stdout
 * @c: character type
 *
 * Return: on success 0, on error 1
 */

int _putchar(char c)
{
	ssize_t bytes = write(1, &c, 1);

	if (bytes == -1)
	{
		return (1);
	}

	return (0);
}
