#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that execute a function
 *
 * @size: a size of array
 * @action: a pointer to the function
 * @array: array
 *
 * Return: anything
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;
	for (j = 0; j < size; j++)
		action(array[j]);
}
