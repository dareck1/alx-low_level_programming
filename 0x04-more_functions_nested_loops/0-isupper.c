#include "main.h"

/**
 * _isupper - check for uppercase
 *
 * @c: parameter
 *
 * Return: 0
 */

int _isupper(int c)
{
	if (c == 'A')
		return (1);
	else if (c == 'a')
		return (0);
	return (0);
}
