#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - it will print numbers
 *
 * @separator: separator
 * @n: number of integer
 *
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	if (separator == NULL)
		return;
	if (n == 0)
		return;
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (i != (n - 1))
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
