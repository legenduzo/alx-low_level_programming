#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2d array
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to pointers or Null
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = (int **)malloc(sizeof(int **) * width);
	if (p != NULL)
	{
		for (i = 0; i < width; i++)
		{
			p[i] = (int *)malloc(sizeof(int *) * height);
			if (p[i] == NULL)
			{
				for (j = 0; j < i; j++)
					free(p[j]);
				free(p);
				return (NULL);
			}

			for (j = 0; j < height; j++)
				p[i][j] = 0;
		}
	}
	return (p);
}
