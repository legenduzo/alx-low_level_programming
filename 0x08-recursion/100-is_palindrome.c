#include "main.h"

/**
 * check_palindrome - checks
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
 * is_palindrome - checks
 * @s: string
 *
 * Return: int
 */

int is_palindrome(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;

	return (check_palindrome(s, 0, (l - 1)));
}
