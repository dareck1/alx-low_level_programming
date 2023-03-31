#include "main.h"

/**
 * reverse_array - Reverse the content of an array
 *
 * @a: parameter 1
 * @n: parameter 2
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n/2 ; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
