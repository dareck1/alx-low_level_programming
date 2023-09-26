#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_name - proint name
 *
 * @name: name of person
 * @f: pointer funtiion
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	(*f)(name);
}
