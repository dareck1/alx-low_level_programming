#include <stdlib.h>
#include "main.h"

/**
 * create_function - function that creates an array of chars, and initializes it with a specific char.
 *
 * @size: size of array
 * @c: caracter
 *
 * Return: a pointer 
 */

char *create_array(unsigned int size, char c)
{
	char *tab;
	unsigned int i;

	if (size == 0)
		return (NULL);
	tab = malloc(sizeof(char) * size);
	if (tab == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		tab[i] = c;
	return (tab);
}
