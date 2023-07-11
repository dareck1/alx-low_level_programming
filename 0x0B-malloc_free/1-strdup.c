#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - duplicate a string
 *
 * @str: string
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	char *s;

	s = malloc(sizeof(char));
	if (s == NULL)
		return (NULL);
	memcpy(s, str);
	return (s);
}
