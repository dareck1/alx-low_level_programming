#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers
 *
 * @separator: separator
 * @n: numbers will be print
 *
 * Return: anything
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	if (separator == NULL)
		return;
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg);
}


