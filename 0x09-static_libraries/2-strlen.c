#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: the pointer to the string it returns
 *
 * Return: int
 */

int _strlen(char *s)
{
	int l;

	l = 0;

	for (; *s != '\0'; s++)
	{
		l++;
	}
	return (l);
}
