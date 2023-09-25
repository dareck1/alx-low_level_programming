#include <stdio.h>

/**
 * main - what is my name
 *
 * @argc: argument number
 * @argv: string
 *
 * Return: (0);
 */

int main(int argc, char **argv)
{
	if (argc == 0)
		argv = NULL;
	printf("%s", *argv);
	printf("\n");
	return (0);
}
