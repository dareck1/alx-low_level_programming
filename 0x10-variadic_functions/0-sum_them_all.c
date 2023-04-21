#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all
 *
 * @n: number
 *
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	va_start(args, n);
	if (n == 0)
		return (0);
	else
		for (i = 0; i < n; i++)
			sum += (int) va_arg(args, int);
	va_end (args);
	return sum;
}
