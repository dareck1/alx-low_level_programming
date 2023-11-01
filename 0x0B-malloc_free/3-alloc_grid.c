#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * alloc_grid - alloc a 2d array and initialize it to 0
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: a pointer
 */

int **alloc_grid(int width, int height)
{
	int **tab2d, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	tab2d = (int **)malloc(sizeof(int) * height);
	if (tab2d == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		tab2d[i] = (int *)malloc(sizeof(int *) * width);
		if (tab2d[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(tab2d[j]);
			}
			free(tab2d);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			tab2d[i][j] = 0;
		}
	}
	return (tab2d);
}
