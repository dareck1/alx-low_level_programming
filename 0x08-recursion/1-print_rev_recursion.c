#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - print string in reverse
 *
 * @s: string will be printed
 *
 * Return: anything
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
