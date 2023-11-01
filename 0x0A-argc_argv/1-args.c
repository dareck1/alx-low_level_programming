#include <stdio.h>

/**
 * main - rogram that prints the number of arguments passed into it.
 *
 * @argc: size of array
 * @argv: array
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	printf("%d\n", (argc - 1));
	(void)argv;
	return (0);
}
