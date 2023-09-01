#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 *
 * @argc: argument number
 * @argv: string
 *
 * Return: always 0
 */

int main(int argc, char **argv)
{
	printf("%d\n", (argc - 1));
	(void)argv;
	return (0);
}

