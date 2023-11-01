#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line.
 *
 * @argc: size of array
 * @argv: array
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc == 0)
		argv = NULL;
	printf("%s", *argv);
	printf("\n");
	return (0);
}
