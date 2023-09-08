#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concat two string
 *
 * @s1: string1
 * @s2: string2
 * @n: n bytes
 *
 * Return: a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1, len2, lent;

	if (s1 == NULL)
		return (NULL);
	len1 = strlen(s1);
	if (s2 == NULL)
		return (NULL);
	len2 = strlen(s2);
	if (n >= len2)
		n = len2;
	lent = len1 + n;
	ptr = malloc(sizeof(char) * (lent + 1));
	if (ptr != NULL)
		strncat(strcpy(ptr, s1), s2, n);
	return (ptr);
	free(ptr);
}
