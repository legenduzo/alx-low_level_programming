#include "main.h"

/**
 * cap_string - Makes a string all caps
 * @s: string to capitalize
 *
 * Return: char * of capitalized string
 */

char *cap_string(char *s)
{
	int i, j;
	const char sep[] = {' ', '\t', '\n', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] == sep[j] && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			{
				s[i + 1] = s[i + 1] - ' ';
				break;
			}
		}
	}

	return (s);
}
