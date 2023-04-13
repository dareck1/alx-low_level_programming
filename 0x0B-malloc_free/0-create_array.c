#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - Createss an array of chars
 *
 * @size: size of unsigned int
 * @c: character to print
 *
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *tab = NULL;

	tab = malloc(size * sizeof(char));
	if (size == 0)
		return (NULL);
	if (tab == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			tab[i] = c;
		}
	}
	return (tab);
}
