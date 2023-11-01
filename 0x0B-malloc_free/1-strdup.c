#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that returns a pointer to a newly allocated
 *
 * @str: string
 *
 * Return: a pointer
 */

char *_strdup(char *str)
{
	char *s;
	size_t len = 0;

	if (str == NULL)
		return (NULL);
	len = strlen(str) + 1;
	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);
	memcpy(s, str, len);
	return (s);
	free(s);
}
