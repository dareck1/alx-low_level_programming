#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in memory,
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
	while (!str)
	{
		len++;
		str++;
	}
	len += 1;
	s = malloc(sizeof(char));
	if (s != NULL)
		memcpy(s, str, len);
	return (s);
}

