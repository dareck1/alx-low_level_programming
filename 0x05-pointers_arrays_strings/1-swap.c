#include "main.h"

/**
 * swap_int - swape value of integers
 *
 * @a: parameter a
 * @b: parameter b
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
