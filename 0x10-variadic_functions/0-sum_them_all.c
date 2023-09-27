#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum all
 *
 * @n: nbr arg
 *
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int sum;
	unsigned int i;

	va_start(arg, n);
	sum = 0;
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += (int) va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}
