#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplie two numbers
 *
 * @argc: number of arguments
 * @argv: array of string
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}

