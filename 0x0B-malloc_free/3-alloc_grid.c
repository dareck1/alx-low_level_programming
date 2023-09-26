#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function that return a pointer to a 2 dimentionnal array
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: a pointer to the allocate memory
 */

int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **)malloc(height * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] =  (int *)malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (j = 0; j < height; j++)
			{
				free(ptr[j]);
			}

			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}

