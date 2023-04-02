#include <stdio.h>

/**
 * main - This function print the alphabet except q and e
 *
 * Return: 0
 */

int main(void)
{
	int i = 97;

	for (i = 97; i <= 122; i++)
		if (i != 101 && i != 113)
			putchar(i);
	putchar('\n');
	return (0);
}
