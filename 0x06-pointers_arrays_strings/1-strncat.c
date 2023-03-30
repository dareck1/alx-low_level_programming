#include "main.h"

/**
 * _strncat - Concatenate two strings
 *
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 *
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int srclen = 0;
	int i;

	for (i = 0; dest[i]; i++)
		destlen++;
	for (i = 0; src[i]; i++)
		srclen++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[destlen + i] = src[i];
	dest[destlen + i] = '\0';
	return (dest);
}
