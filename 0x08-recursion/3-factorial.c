#include "main.h"

/**
 * factorial - factorial of a given number
 *
 * @n: number
 *
 * Return: 0
 */

int factorial(int n)
{
	int res;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	res = n * factorial(n - 1);
	return (res);
}
