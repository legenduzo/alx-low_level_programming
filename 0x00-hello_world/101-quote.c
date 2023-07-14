#include <unistd.h>
#include <string.h>

/* A function that prints to sderr */

/**
 * main - the entry point
 * Description: A function that does not use printf and put
 *
 * Return: returns 1 (error)
 */
int main(void)
{
	char message[] =
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, message, strlen(message));

	return (1);
}
