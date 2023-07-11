#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array
 *
 * @size: array size
 * @c: caracter will be printed
 *
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *tab;

	if (size == 0)
		return (NULL);
	tab = malloc(size * sizeof(char));
	if (tab == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		tab[i] = c;
	return (tab);
}
