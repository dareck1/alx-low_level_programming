#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main -  program that adds positive numbers.
 *
 * @argc: size
 * @argv: array
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int add, i, j;

	add = 0;
	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
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
