#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that multiplies two numbers.
 *
 * @argc: number
 * @argv: string
 *
 * Return: integer
 */

int main(int argc, char **argv)
{
	int res;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	res = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", res);
	return (0);
}
