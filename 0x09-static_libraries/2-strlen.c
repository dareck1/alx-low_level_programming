#include "main.h"

/**
 * _strlen - return the length of a string
 *
 * @s: parameter
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
