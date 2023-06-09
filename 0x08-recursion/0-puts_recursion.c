#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _puts_recursion - print a string
 *
 * @s: string will be print
 *
 * Return: anything
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
