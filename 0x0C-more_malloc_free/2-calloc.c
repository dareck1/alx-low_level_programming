#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _calloc - function that allocates memory for an array,
 *
 * @nmemb: element of size
 * @size: size
 *
 * Return: a pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size * nmemb; i++)
	{
		((char *)ptr)[i] = 0;
	}
	return (ptr);
	free(ptr);
}
