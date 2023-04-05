#include "main.h"

/**
 * this function fills memory whith a constante byte
 *
 * @s: parameter 1
 * @b: parameter 2
 * @n: parameter 3
 *
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int size = sizeof(char) * n;

	for (i = 0; i < size; i++)
		s[i] = b;
	return (s);
}
