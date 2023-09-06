#include "main.h"

/**
 * _strcmp - Compare two strings
 *
 * @s1: parameter 1
 * @s2: parameter 2
 *
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	if (s1 == s2)
		return (0);
	else if (s1 < s2)
		return (72 - 87);
	else
		return (87 - 72);
	return (0);
}
