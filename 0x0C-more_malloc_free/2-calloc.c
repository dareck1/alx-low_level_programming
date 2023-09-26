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
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		((char *)ptr)[i] = 0x00;
	}
	return (ptr);
}
