#include "main.h"

/**
 * factorial - calculate factorial of a number
 *
 * @n: number
 *
 * Return: on success 1.
 * On error, -1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
