#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that returns a pointer to a newly memory
 *
 * @str: string
 *
 * Return: a pointer
 */

char *_strdup(char *str)
{
	char *s;
	size_t len;

	if (str == NULL)
		return (NULL);
	len = strlen(str) + 1;
	s = malloc(sizeof(char) * len);
	if (s != NULL)
		memcpy(s, str, len);
	return (s);
}

