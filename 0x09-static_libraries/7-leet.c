#include "main.h"

/**
 * leet - Be leet
 * @s: string to manipulate
 *
 * Return: char pointer
 */

char *leet(char *s)
{
	int i = 0;
	int j;

	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	while (s[i])
	{
		j = 0;
		while (letters[j])
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
