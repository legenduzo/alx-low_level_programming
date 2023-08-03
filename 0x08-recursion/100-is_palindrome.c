#include "main.h"

/**
 * check_palindrome - helper function
 * @s: string to check
 * @a: start
 * @z: end
 *
 * Return: int
 */

int check_palindrome(char *s, int a, int z)
{
	if (a >= z)
		return (1);

	if (s[a] != s[z])
		return (0);

	return (check_palindrome(s, (a + 1), (z - 1)));
}

/**
 * check_length - checks the length of a string
 * @s: string to check
 *
 * Return: int - length
 */

int check_length(char *s)
{
	if (*s)
		return (1 + check_length(s + 1));
	else
		return (0);
}

/**
 * is_palindrome - checks
 * @s: string
 *
 * Return: int
 */

int is_palindrome(char *s)
{
	int l = check_length(s);

	return (check_palindrome(s, 0, (l - 1)));
}
