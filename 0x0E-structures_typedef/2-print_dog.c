#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - function that prints a struct do
 *
 * @d: a pointer
 *
 * Return: anything
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("%s\n", d->name);
	}
	printf("%f\n", d->age);
	if (d->owner == NULL)
		printf("(nil)\n");
	else
	{
		printf("%s\n", d->owner);
	}
}
