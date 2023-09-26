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
	ptr = (int **)calloc(height, sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] =  (int *)calloc(width, sizeof(int));
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
	return (ptr);
}

