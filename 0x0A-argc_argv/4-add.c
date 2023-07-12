#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add positive number
 *
 * @argc: number
 * @argv: string
 *
 * Return: ad
 */

int main(int argc, char **argv)
{
	int add;
	int i, j;

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
	}
	add = add + atoi(argv[i]);
	printf("%d\n", add);
	return (0);
}

