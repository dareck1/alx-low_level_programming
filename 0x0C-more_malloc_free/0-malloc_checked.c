#include <stdlib.h>
#include "main.h"

/**
 * main - function that allocates memory using malloc
 *
 * @b: an integer
 *
 * Return: a pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
	free(ptr);
}
