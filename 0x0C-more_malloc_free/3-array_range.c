#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 *
 * @min: min
 * @max: max
 *
 * Return: an integer
 */

int *array_range(int min, int max)
{
	int *tab, size, i;

	size = max - min + 1;
	if (min > max)
		return (NULL);
	tab = malloc(sizeof(int) * size);
	if (tab == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		tab[i] = min + i;
	return (tab);
}
