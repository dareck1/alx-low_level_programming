#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocate memory
 *
 * @b: size_t
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	if (b == 0)
		return (NULL);
	p = malloc(b);
	if (p == NULL)
		exit(98);
	/*
	 *
	 * return (p);
	 *
	 */
}
