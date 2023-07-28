#include "main.h"

/**
 * cap_string - Makes a string all caps
 * @s: string to capitalize
 *
 * Return: char * of capitalized string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || \
					s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?'  || \
					s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}') \
				&& (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
		{
			s[i + 1] = s[i + 1] - ' ';
		}
	}

	return (s);
}
