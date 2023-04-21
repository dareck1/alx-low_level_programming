#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings
 *
 * @separator: string
 * @n: number
 *
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *str;
	unsigned int i;

	va_start(args, n);
	if (separator == NULL)
		return;
	for (i = 0; i < n; i++)	
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("nil");
		if (i == (n -1))
			printf("%s", separator);
		printf("%s", str);
	}
	va_end(args);
	printf("\n");
}
