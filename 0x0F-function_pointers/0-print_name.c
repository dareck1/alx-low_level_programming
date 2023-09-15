#include "function_pointers.h"

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
	if (f != NULL)
		(*f)(name);
}