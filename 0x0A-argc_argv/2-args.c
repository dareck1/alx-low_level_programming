#include <stdio.h>

/**
 * main - print all the argument receive
 *
 * @argc: para0
 * @argv: para1
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
