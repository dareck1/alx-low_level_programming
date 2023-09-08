#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that creates an array of integers.
 *
 * @nmemb: nmemb
 * @size: size
 *
 * Return: an integer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = calloc(sizeof(size * nmemb), size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
	free(ptr);
}
