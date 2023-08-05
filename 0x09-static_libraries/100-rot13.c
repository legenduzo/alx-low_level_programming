#include "main.h"

/**
 * rot13 - manipulate strings
 * @s: string to manipulate
 *
 * Return: char pointer
 */

char *rot13(char *s)
{
	int i;
	int j;
	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alph[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}
	return (s);
}
