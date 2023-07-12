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
	unsigned int len;	
	if (str == NULL)
		return (NULL);
	len = strlen(str) + 1;
	s = malloc(len * sizeof(char));
	if (s != NULL)
		memcpy(s, str);
	return (s);
}
