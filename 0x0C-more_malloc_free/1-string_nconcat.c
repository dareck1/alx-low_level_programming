#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings.
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned len1, len2, lent;

	if (s1 == NULL)
		return (NULL);
	len1 = strlen(s1);
	if (s2 == NULL)
		return (NULL);
	len2 = strlen(s2);
	if (n >= len2)
		n = len2;
	lent = n + len1;
	ptr = malloc(sizeof(char) * (lent + 1));
	if (ptr != NULL)
		strncat(strcpy(ptr, s1), s2, n);
	return (ptr);
}
