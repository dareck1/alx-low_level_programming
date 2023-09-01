#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main -  program that adds positive numbers.
 *
 * @argc: argument of main
 * @argv: array of type
 *
 * Return: add
 */

int main(int argc, char **argv)
{
	int add;
	int i,j;

	add = 0;
	if (argc == 1)
		printf("%d\n", 0);
	for (i = 0; i < argc - 1; i++)
	{
		for (j = 0; j < argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
	add = add + atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}

