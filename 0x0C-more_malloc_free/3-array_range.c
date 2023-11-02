#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range -  function that creates an array of integers.
 *
 * @min: minimum value
 * @max: maximum value
 *
 * Return: a pointer
 */

int *array_range(int min, int max)
{
	int *tab, i, size;

	size = max - min + 1;
	if (min > max)
		return (NULL);
	tab = malloc(sizeof(int) * size);
	if (tab == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		tab[i] = min + i;
	return (tab);
	free(tab);
}
