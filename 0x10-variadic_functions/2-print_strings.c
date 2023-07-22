#include <stdio.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings
 *
 * @separator: contant character
 * @n: number of string
 *
 * Return: anithing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list arg;

	va_start(arg, n);
	if (separator == NULL)
		return;
	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char *);
		if (str == NULL)
			printf("(nil)");
		printf("%s", str);
		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
