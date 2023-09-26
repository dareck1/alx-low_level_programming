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
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
	free(ptr);
}
