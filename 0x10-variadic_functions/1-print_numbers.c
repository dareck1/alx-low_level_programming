#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_number - print number
 *
 * @separator: the string to be printed
 * @: number of integer
 *
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	va_start(args, n);
	if (separator == NULL)
		return;
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
