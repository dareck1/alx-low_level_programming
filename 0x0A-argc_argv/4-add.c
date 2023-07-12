#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive number
 *
 * @argc: number
 * @argv: string
 *
 * Return: add
 */

int main(int argc, char **argv)
{
	int add;
	int i;

	add = 0;
	if (argc != 2)
		printf("%d\n", 0);
	if ((*argv)[0] >= 58 && (*argv)[0] <= 126)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; i <	argc - 1; i++)
		add = add + atoi(argv[i + 1]);
	printf("%d\n", add);
	return (0);
}

