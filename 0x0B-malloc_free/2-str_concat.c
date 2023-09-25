#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: string one
 * @s2: string two
 *
 * Return: a pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	size_t len1, len2;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = strlen(s1);
	len2 = strlen(s2);
	p = malloc(sizeof(char) * (len1 + len2 + 1));
	if (p == NULL)
		return (NULL);
	strcat(strcpy(p, s1), s2);
	return (p);
}
