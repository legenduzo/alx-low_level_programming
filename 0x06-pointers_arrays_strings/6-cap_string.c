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

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - ' ';
	}

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
