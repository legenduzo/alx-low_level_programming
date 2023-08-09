#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * argstostr - converts arguments to \n seperated string
 * @ac: argument count
 * @av: argument vector
 *
 * Return: Null or pointer
 */

char *argstostr(int ac, char **av)
{
	int lengths;
	int len;
	int i;
	int index;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	lengths = 0;
	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
			lengths += strlen(av[i]) + 1;
	}

	s = (char *)malloc(sizeof(char) * (lengths + 1));

	if (s == NULL)
		return (NULL);

	index = 0;
	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			len = strlen(av[i]);
			strcpy(s + index, av[i]);
			index += len;
			s[index++] = '\n';
		}
	}

	return (s);
}
