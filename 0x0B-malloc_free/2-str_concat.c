#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenate two string
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	size_t len1, len2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = strlen(s1);
	len2 = strlen(s2);
	p = malloc(sizeof(char) * (len1 + len2 + 1));
	if (p != NULL)
		strcat(strcpy(p, s1), s2);
	return (p);
}
